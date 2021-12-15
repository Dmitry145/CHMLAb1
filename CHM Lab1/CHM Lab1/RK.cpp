#include "RK.h"

//для системы:
double SystemErrorEstimation(double w1, double w2, double y1, double y2, int p)
{
    double tmp1 = w1 - y1;
    double tmp2 = w2 - y2;
    if (abs(tmp1) > abs(tmp2))
        return abs(tmp1) / (pow(2, p) - 1);
    else
        return abs(tmp2) / (pow(2, p) - 1);
}


double f1(double x0, double y1, double y2, double a, double b)
{
    return y2;
}


double f2(double x0, double y1, double y2, double a, double b)
{
    return -a * pow(y2,2) + b * sin(y1);
}


std::vector<std::vector<double>> CoeffCalculation(double x, double y1, double y2, double h, double a, double b)
{
    std::vector<std::vector<double>> coeff;
    coeff.assign(2, std::vector<double>(4));

    coeff[0][0] = h * f1(x, y1, y2, a,b);
    coeff[1][0] = h * f2(x, y1, y2, a, b);

    coeff[0][1] = h * f1(x + 0.5 * h, y1 + 0.5 * coeff[0][0], y2 + 0.5 * coeff[1][0], a, b);
    coeff[1][1] = h * f2(x + 0.5 * h, y1 + 0.5 * coeff[0][0], y2 + 0.5 * coeff[1][0], a, b);

    coeff[0][2] = h * f1(x + 0.5 * h, y1 + 0.5 * coeff[0][1], y2 + 0.5 * coeff[1][1], a, b);
    coeff[1][2] = h * f2(x + 0.5 * h, y1 + 0.5 * coeff[0][1], y2 + 0.5 * coeff[1][1], a, b);

    coeff[0][3] = h * f1(x + h, y1 + coeff[0][2], y2 + coeff[1][2], a, b);
    coeff[1][3] = h * f2(x + h, y1 + coeff[0][2], y2 + coeff[1][2], a, b);

    return coeff;
}



std::vector<double> DoubleCalculation(double x, double y1, double y2, double h, double a, double b)
{
    std::vector<double> tmp;
    double tmpx = x + h / 2;
    std::vector<std::vector<double>> Coeff = CoeffCalculation(x, y1, y2, h / 2, a, b);
    double tmp1 = y1 + (Coeff[0][0] + 2 * Coeff[0][1] + 2 * Coeff[0][2] + Coeff[0][3]) / 6;
    double tmp2 = y2 + (Coeff[1][0] + 2 * Coeff[1][1] + 2 * Coeff[1][2] + Coeff[1][3]) / 6;
    Coeff = CoeffCalculation(tmpx, tmp1, tmp2, h / 2, a, b);
    tmp1 = tmp1 + (Coeff[0][0] + 2 * Coeff[0][1] + 2 * Coeff[0][2] + Coeff[0][3]) / 6;
    tmp2 = tmp2 + (Coeff[1][0] + 2 * Coeff[1][1] + 2 * Coeff[1][2] + Coeff[1][3]) / 6;
    tmp.push_back(tmp1);
    tmp.push_back(tmp2);
    return tmp;
}

int StepChange(int p, double S, double E)
{
    double tmp = E / (pow(2, p + 1));

    if (tmp <= abs(S) && abs(S) <= E)
        return 1;

    if (abs(S) < tmp)
        return 2;

    if (abs(S) > E)
        return 3;
}

std::vector<std::vector<double>> RK4(double x0, double y10, double y20, double h, double a, double b, double maxH, double E, double Egr, double maxX)
{
    std::vector<double> result(12);
    result[3] = 999;
    result[9] = 999;
    /* в result:
    * 0 - n - число шагов
    * 1 - max||s||
    * 2 - x для max||s||
    * 3 - min||s||
    * 4 - x для min||s||
    * 5 - xn
    * 6 - yn
    * 7 - zn
    * 8 - максимальный шаг
    * 9 - минимальный шаг
    * 10 - общее количество увеличений шага
    * 11 - общее количество уменьшений шага
    */

    std::vector<std::vector<double>> rk4table;
    rk4table.assign(10, std::vector<double>(maxH + 1));
    /* в rk4table:
    * 0 - шаг метода - i
    * 1 - шаг интегрирования h(i)
    * 2 - x
    * 3 - y
    * 4 - z
    * 5 - v^-v
    * 6 - s
    * 7 - s*
    * 8 - ув. шага
    * 9 - ум. шага
    */

    double x;
    double y1;
    double y2;
    rk4table[1][0] = h;
    rk4table[2][0] = x = x0;
    rk4table[3][0] = y1 = y10;
    rk4table[4][0] = y2 = y20;
    int i = 1;

    while (i < maxH)
    {
        rk4table[0][i] = i;
        rk4table[8][i] = result[10];
        rk4table[9][i] = result[11];
        if (x + h > maxX)
        {
            h = h / 2;
            rk4table[9][i] = result[11] = result[11] + 1;
            continue;
        }


        std::vector<std::vector<double>> Coeff = CoeffCalculation(x, y1, y2, h, a, b);
        std::vector<double> W = DoubleCalculation(x, y1, y2, h, a, b);
        rk4table[2][i] = x = x + h;
        double S;
        S = SystemErrorEstimation(W[0], W[1], y1 + (Coeff[0][0] + 2 * Coeff[0][1] + 2 * Coeff[0][2] + Coeff[0][3]) / 6, y2 + (Coeff[1][0] + 2 * Coeff[1][1] + 2 * Coeff[1][2] + Coeff[1][3]) / 6, 4);
        rk4table[6][i] = S;
        rk4table[7][i] = S * 16;

        if (abs(result[1]) < abs(S))
        {
            result[1] = abs(S);
            result[2] = x;
        }

        if ((abs(result[3]) > abs(S)))
        {
            result[3] = abs(S);
            result[4] = x;
        }

        if (StepChange(4, S, E) == 3)
        {
            x = x - h;
            h /= 2;
            result[11] = result[11] + 1;
            continue;
        }

        if (StepChange(4, S, E) == 2)
        {
            h *= 2;
            result[10] = result[10] + 1;
        }


        y1 = y1 + (Coeff[0][0] + 2 * Coeff[0][1] + 2 * Coeff[0][2] + Coeff[0][3]) / 6;
        rk4table[3][i] = y1;
        y2 = y2 + (Coeff[1][0] + 2 * Coeff[1][1] + 2 * Coeff[1][2] + Coeff[1][3]) / 6;
        rk4table[4][i] = y2;

        if (abs(W[0] - y1) > abs(W[1] - y2))
            rk4table[5][i] = abs(W[0] - y1);
        else
            rk4table[5][i] = abs(W[1] - y2);

        rk4table[1][i] = h;
        rk4table[8][i] = result[10];
        rk4table[9][i] = result[11];

        if (result[8] < h)
        {
            result[8] = h;
        }

        if (result[9] > h)
        {
            result[9] = h;
        }

        i += 1;


        //rk4table[0][i] = i;
        if ((x > maxX - Egr) && (x <= maxX))
            break;

    }

    result[0] = i - 1;
    result[5] = rk4table[2][i - 1];
    result[6] = rk4table[3][i - 1];
    result[7] = rk4table[4][i - 1];


    for (int j = 0; j < maxH - i + 1; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            rk4table[k].pop_back();
        }
    }

    for (int i = 0; i < rk4table[6].size(); i++)
    {
        if (abs(result[1]) < abs(rk4table[6][i]))
        {
            result[1] = abs(rk4table[6][i]);
            result[2] = rk4table[2][i];
        }
    }


    rk4table.push_back(result);
    return rk4table;
}

//для ОДУ:
double ODEErrorEstimation(double w, double y, int p)
{
    return (w - y) / (pow(2, p) - 1);
}

std::vector<double> ODECoeffCalculation(double (*f)(double , double ), double x, double y, double h)
{
    std::vector<double> coeff(4);

    coeff[0] = h * f(x, y);
    coeff[1] = h * f(x + 0.5 * h, y + 0.5 * coeff[0]);
    coeff[2] = h * f(x + 0.5 * h, y + 0.5 * coeff[1]);
    coeff[3] = h * f(x + h, y + coeff[2]);
    return coeff;
}

double ODEDoubleCalculation(double(*f)(double, double), double x, double y, double h)
{
    double tmpx = x + h / 2;
    std::vector<double> Coeff = ODECoeffCalculation(f, x, y, h / 2);
    double tmp1 = y + (Coeff[0] + 2 * Coeff[1] + 2 * Coeff[2] + Coeff[3]) / 6;
    Coeff = ODECoeffCalculation(f, tmpx, tmp1, h / 2);
    tmp1 = tmp1 + (Coeff[0] + 2 * Coeff[1] + 2 * Coeff[2] + Coeff[3]) / 6;
    return tmp1;
}

std::vector<std::vector<double>> ODERK4(double(*f)(double, double), double x0, double y10, double h, double a, double b, double maxH, double E, double Egr, double maxX)
{
    std::vector<double> result(11);
    result[3] = 999;
    result[8] = 999;
    /* в result:
    * 0 - n - число шагов
    * 1 - max s
    * 2 - x для max s
    * 3 - min s
    * 4 - x для min s
    * 5 - xn
    * 6 - yn
    * 7 - максимальный шаг
    * 8 - минимальный шаг
    * 9 - общее количество увеличений шага
    * 10 - общее количество уменьшений шага
    */

    std::vector<std::vector<double>> rk4table;
    rk4table.assign(9, std::vector<double>(maxH + 1));
    /* в rk4table:
    * 0 - шаг метода - i
    * 1 - шаг интегрирования h(i)
    * 2 - x
    * 3 - y
    * 4 - y^
    * 5 - s
    * 6 - s*
    * 7 - ув. шага
    * 8 - ум. шага
    */

    double x;
    double y;
    rk4table[1][0] = h;
    rk4table[2][0] = x = x0;
    rk4table[3][0] = y = y10;
    int i = 1;

    while (i < maxH)
    {
        rk4table[0][i] = i;
        rk4table[7][i] = result[9];
        rk4table[8][i] = result[10];
        if (x + h > maxX)
        {
            h = h / 2;
            rk4table[8][i] = result[10] = result[10] + 1;
            continue;
        }


        std::vector<double> Coeff = ODECoeffCalculation(f, x, y, h);
        double W = ODEDoubleCalculation(f, x, y, h);
        rk4table[2][i] = x = x + h;
        double S;
        S = ODEErrorEstimation(W, y + (Coeff[0] + 2 * Coeff[1] + 2 * Coeff[2] + Coeff[3]) / 6, 4);
        rk4table[5][i] = S;
        rk4table[6][i] = S * 16;

        /*if (abs(result[1]) < S)
        {
            result[1] = S;
            result[2] = x;
        }*/

        if ((abs(result[3]) > S))
        {
            result[3] = S;
            result[4] = x;
        }

        if (StepChange(4, S, E) == 3)
        {
            x = x - h;
            h /= 2;
            result[10] = result[10] + 1;
            continue;
        }

        if (StepChange(4, S, E) == 2)
        {
            h *= 2;
            result[9] = result[9] + 1;
        }


        y = y + (Coeff[0] + 2 * Coeff[1] + 2 * Coeff[2] + Coeff[3]) / 6;
        rk4table[3][i] = y;
        

        rk4table[4][i] = W;
        

        rk4table[1][i] = h;
        rk4table[7][i] = result[9];
        rk4table[8][i] = result[10];

        if (result[7] < h)
        {
            result[7] = h;
        }

        if (result[8] > h)
        {
            result[8] = h;
        }

        i += 1;


        //rk4table[0][i] = i;
        if ((x > maxX - Egr) && (x <= maxX))
            break;

    }

    result[0] = i - 1;
    result[5] = rk4table[2][i - 1];
    result[6] = rk4table[3][i - 1];


    for (int j = 0; j < maxH - i + 1; j++)
    {
        for (int k = 0; k < 9; k++)
        {
            rk4table[k].pop_back();
        }
    }

    for (int i = 0; i < rk4table[5].size(); i++)
    {
        if (result[1] < rk4table[5][i])
        {
            result[1] = rk4table[5][i];
            result[2] = rk4table[2][i];
        }
    }


    rk4table.push_back(result);
    return rk4table;
}