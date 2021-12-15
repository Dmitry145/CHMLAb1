#pragma once

#include <iostream>
#include <vector>
#include <cmath>

//using namespace std;

double SystemErrorEstimation(double w1, double w2, double y1, double y2, int p);
double f1(double x0, double y1, double y2, double a, double b);
double f2(double x0, double y1, double y2, double a, double b);
std::vector<std::vector<double>> CoeffCalculation(double x, double y1, double y2, double h, double a, double b);
std::vector<double> DoubleCalculation(double x, double y1, double y2, double h, double a, double b);
int StepChange(int p, double S, double E);
std::vector<std::vector<double>> RK4(double x0, double y10, double y20, double h, double a, double b, double maxH, double E, double Egr, double maxX);
double ODEErrorEstimation(double w, double y, int p);
std::vector<double> ODECoeffCalculation(double (*f)(double, double), double x, double y, double h);
double ODEDoubleCalculation(double(*f)(double, double), double x, double y, double h);
std::vector<std::vector<double>> ODERK4(double(*f)(double, double), double x0, double y10, double h, double a, double b, double maxH, double E, double Egr, double maxX);