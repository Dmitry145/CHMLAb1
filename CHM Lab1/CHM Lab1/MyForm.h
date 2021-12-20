#pragma once
#include "RK.h"

int j = 0;
int tablesize = 0;

double f3(double x, double y)
{
	return -(5 / 2) * y;
}

double f4(double x, double y)
{
	return pow(y, 2) * (log(x + 1)) / (pow(x, 2) + 1) + y - pow(y, 3) * sin(10 * x);
}

namespace CHMLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;








	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Çàäà÷à:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(12, 263);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(316, 239);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Íà÷àëüíûå óñëîâèÿ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(114, 93);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 20);
			this->textBox7->TabIndex = 5;
			this->textBox7->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 54);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(248, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"10";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(45, 22);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(249, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"U\'0(äëÿ ñèñòåìû) = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"U0 = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"X0 = ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Òåñòîâàÿ", L"Îñíîâíàÿ 1", L"Îñíîâíàÿ 2" });
			this->comboBox1->Location = System::Drawing::Point(12, 224);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Âû÷èñëèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 577);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(828, 422);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(352, 263);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(856, 239);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ïàðàìåòðû ìåòîäà";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(19, 177);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(819, 20);
			this->textBox9->TabIndex = 27;
			this->textBox9->Text = L"2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(195, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"X ïðèíàäëåæèò îòðåçêó [X0;T], ãäå T:";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(420, 50);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(418, 20);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"0,01";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(420, 109);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(418, 20);
			this->textBox10->TabIndex = 21;
			this->textBox10->Text = L"0,01";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(19, 109);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(359, 20);
			this->textBox6->TabIndex = 24;
			this->textBox6->Text = L"0,01";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(19, 50);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(359, 20);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"1000";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(417, 25);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(409, 13);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Òî÷íîñòü âûõîäà íà ãðàíèöó epsilon ãð. (äîëæíî áûòü ïîëîæèòåëüíûì ÷èñëîì):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(417, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(421, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Êîíòðîëü ëîêàëüíîé ïîãðåøíîñòè epsilon (äîëæíî áûòü ïîëîæèòåëüíûì ÷èñëîì):";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(16, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(462, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Íà÷àëüíûé øàã(äîëæåí áûòü ïîëîæèòåëüíûì ÷èñëîì):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(16, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(427, 12);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ìàêñèìàëüíîå ÷èñëî øàãîâ(äîëæíî áûòü öåëûì ÷èñëîì, áîëüøå 1):";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label15);
			this->groupBox6->Location = System::Drawing::Point(972, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(784, 233);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ðåçóëüòàò";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(22, 28);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(599, 187);
			this->label15->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 131);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(234, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(311, 131);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(602, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(263, 131);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1767, 946);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 53);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Âûõîä";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(1233, 263);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(523, 239);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ïàðàìåòðû a, b (äëÿ ñèñòåìû)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(62, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(336, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(26, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"b = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"a = ";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->chart2);
			this->groupBox4->Controls->Add(this->chart1);
			this->groupBox4->Location = System::Drawing::Point(874, 577);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(882, 422);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ãðàôèêè";
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(444, 19);
			this->chart2->Name = L"chart2";
			this->chart2->Size = System::Drawing::Size(432, 397);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			title1->Name = L"Title1";
			title1->Text = L"Ôàçîâûé ïîðòðåò(äëÿ ñèñòåìû)";
			this->chart2->Titles->Add(title1);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(16, 19);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(454, 397);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title2->Name = L"Title1";
			title2->Text = L"U(x)";
			this->chart1->Titles->Add(title2);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(152, 511);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 50);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Î÷èñòèòü òàáëèöó è ãðàôèê";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1884, 1011);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Ëàáîðàòîðíàÿ 1. 5 âàðèàíò.";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	j++;
	double a, b, maxH, h, E, Egr, maxX, x, y1, y2;
	maxX = Convert::ToDouble(textBox9->Text);
	maxH = Convert::ToDouble(textBox5->Text);
	h = Convert::ToDouble(textBox6->Text);
	E = Convert::ToDouble(textBox10->Text);
	Egr = Convert::ToDouble(textBox11->Text);
	a = Convert::ToDouble(textBox1->Text);
	b = Convert::ToDouble(textBox2->Text);
	x = Convert::ToDouble(textBox3->Text);
	y1 = Convert::ToDouble(textBox4->Text);
	y2 = Convert::ToDouble(textBox7->Text);

	if (comboBox1->Text == "Îñíîâíàÿ 2")
	{
	 	if (dataGridView1->ColumnCount == 0)
		{
			dataGridView1->Columns->Add("", "i");
			dataGridView1->Columns->Add("", "h(i)");
			dataGridView1->Columns->Add("", "x");
			dataGridView1->Columns->Add("", "U");
			dataGridView1->Columns->Add("", "U'");
			dataGridView1->Columns->Add("", "||v^-v||");
			dataGridView1->Columns->Add("", "||s||");
			dataGridView1->Columns->Add("", "s*");
			dataGridView1->Columns->Add("", "ув. шага");
			dataGridView1->Columns->Add("", "ум. шага");
		}
		std::vector<std::vector<double>> rk = RK4(x, y1, y2, h, a, b, maxH, E, Egr, maxX);
		
		dataGridView1->Rows->Add(rk[0].size());

		for (int i = 0; i < rk[0].size(); i++)
		{

			for (int j = 0; j < rk.size() - 1; j++)
			{
				dataGridView1[j, tablesize]->Value = Convert::ToString(rk[j][i]);
			}
			tablesize++;
		}

		//tablesize += rk[0].size();
		/*for (int i = 0; i < rk[2].size() - 1; i++)
		{
			chart2->Series[0]->Points->AddXY(rk[2][i], rk[4][i]);
		}*/

		chart1->Series->Add(Convert::ToString(j));
		chart1->Series[Convert::ToString(j)]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		chart2->Series->Add(Convert::ToString(j));
		chart2->Series[Convert::ToString(j)]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;

		for (int i = 0; i < rk[2].size() - 1; i++)
		{
			chart2->Series[Convert::ToString(j)]->Points->AddXY(rk[3][i], rk[4][i]);
		}

		for (int i = 0; i < rk[2].size() - 1; i++)
		{
			chart1->Series[Convert::ToString(j)]->Points->AddXY(rk[2][i], rk[3][i]);
		}

		label15->Text = "Îáùåå ÷èñëî øàãîâ:" + Convert::ToString(rk[10][0]) + "\nÌàêñèìàëüíàÿ ||S||:" + Convert::ToString(rk[10][1]) + "\nx äëÿ ìàêñèìàëüíîé ||S||:" + Convert::ToString(rk[10][2]) + "\nÌèíèìàëüíàÿ ||S||:" + Convert::ToString(rk[10][3]) + "\nx äëÿ ìèíèìàëüíîé ||S||:" + Convert::ToString(rk[10][4]) + "\nÏîñëåäíåå çíà÷åíèå x:" + Convert::ToString(rk[10][5]) + "\nÏîñëåäíåå çíà÷åíèå y:" + Convert::ToString(rk[10][6]) + "\nÏîñëåäíåå çíà÷åíèå z:" + Convert::ToString(rk[10][7]) + "\nÌàêñèìàëüíûé øàã:" + Convert::ToString(rk[10][8]) + "\nÌèíèìàëüíûé øàã:" + Convert::ToString(rk[10][9]) + "\n×èñëî óâåëè÷åíèé øàãà:" + Convert::ToString(rk[10][10]) + "\n×èñëî óìåíüøåíèé øàãà:" + Convert::ToString(rk[10][11]);
	}


	if (comboBox1->Text == "Îñíîâíàÿ 1")
	{
		if (dataGridView1->ColumnCount == 0)
		{
			dataGridView1->Columns->Add("", "i");
			dataGridView1->Columns->Add("", "h(i)");
			dataGridView1->Columns->Add("", "x");
			dataGridView1->Columns->Add("", "U");
			dataGridView1->Columns->Add("", "U^");
			dataGridView1->Columns->Add("", "s");
			dataGridView1->Columns->Add("", "s*");
			dataGridView1->Columns->Add("", "ув. шага");
			dataGridView1->Columns->Add("", "ум. шага");
		}
		std::vector<std::vector<double>> rk = ODERK4(f4, x, y1, h, a, b, maxH, E, Egr, maxX);

		dataGridView1->Rows->Add(rk[0].size());

		for (int i = 0; i < rk[0].size(); i++)
		{

			for (int j = 0; j < rk.size() - 1; j++)
			{
				dataGridView1[j, tablesize]->Value = Convert::ToString(rk[j][i]);
			}
			tablesize++;
		}
		chart1->Series->Add(Convert::ToString(j));
		chart1->Series[Convert::ToString(j)]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;


		for (int i = 0; i < rk[2].size() - 1; i++)
		{
			chart1->Series[Convert::ToString(j)]->Points->AddXY(rk[2][i], rk[3][i]);
		}

		label15->Text = "Îáùåå ÷èñëî øàãîâ:" + Convert::ToString(rk[9][0]) + "\nÌàêñèìàëüíàÿ S:" + Convert::ToString(rk[9][1]) + "\nx äëÿ ìàêñèìàëüíîé S:" + Convert::ToString(rk[9][2]) + "\nÌèíèìàëüíàÿ S:" + Convert::ToString(rk[9][3]) + "\nx äëÿ ìèíèìàëüíîé S:" + Convert::ToString(rk[9][4]) + "\nÏîñëåäíåå çíà÷åíèå x:" + Convert::ToString(rk[9][5]) + "\nÏîñëåäíåå çíà÷åíèå y:" + Convert::ToString(rk[9][6]) + "\nÌàêñèìàëüíûé øàã:" + Convert::ToString(rk[9][7]) + "\nÌèíèìàëüíûé øàã:" + Convert::ToString(rk[9][8]) + "\n×èñëî óâåëè÷åíèé øàãà:" + Convert::ToString(rk[9][9]) + "\n×èñëî óìåíüøåíèé øàãà:" + Convert::ToString(rk[9][10]);
	}

	if (comboBox1->Text == "Òåñòîâàÿ")
	{
		if (dataGridView1->ColumnCount == 0)
		{
			dataGridView1->Columns->Add("", "i");
			dataGridView1->Columns->Add("", "h(i)");
			dataGridView1->Columns->Add("", "x");
			dataGridView1->Columns->Add("", "U");
			dataGridView1->Columns->Add("", "U^");
			dataGridView1->Columns->Add("", "s");
			dataGridView1->Columns->Add("", "s*");
			dataGridView1->Columns->Add("", "ув. шага");
			dataGridView1->Columns->Add("", "ум. шага");
		}
		std::vector<std::vector<double>> rk = ODERK4(f3, x, y1, h, a, b, maxH, E, Egr, maxX);

		dataGridView1->Rows->Add(rk[0].size());

		for (int i = 0; i < rk[0].size(); i++)
		{

			for (int j = 0; j < rk.size() - 1; j++)
			{
				dataGridView1[j, tablesize]->Value = Convert::ToString(rk[j][i]);
			}
			tablesize++;
		}
		chart1->Series->Add(Convert::ToString(j));
		chart1->Series[Convert::ToString(j)]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;


		for (int i = 0; i < rk[2].size() - 1; i++)
		{
			chart1->Series[Convert::ToString(j)]->Points->AddXY(rk[2][i], rk[3][i]);
		}

		label15->Text = "Îáùåå ÷èñëî øàãîâ:" + Convert::ToString(rk[9][0]) + "\nÌàêñèìàëüíàÿ S:" + Convert::ToString(rk[9][1]) + "\nx äëÿ ìàêñèìàëüíîé S:" + Convert::ToString(rk[9][2]) + "\nÌèíèìàëüíàÿ S:" + Convert::ToString(rk[9][3]) + "\nx äëÿ ìèíèìàëüíîé S:" + Convert::ToString(rk[9][4]) + "\nÏîñëåäíåå çíà÷åíèå x:" + Convert::ToString(rk[9][5]) + "\nÏîñëåäíåå çíà÷åíèå y:" + Convert::ToString(rk[9][6]) + "\nÌàêñèìàëüíûé øàã:" + Convert::ToString(rk[9][7]) + "\nÌèíèìàëüíûé øàã:" + Convert::ToString(rk[9][8]) + "\n×èñëî óâåëè÷åíèé øàãà:" + Convert::ToString(rk[9][9]) + "\n×èñëî óìåíüøåíèé øàãà:" + Convert::ToString(rk[9][10]);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	chart1->Series->Clear();
	chart2->Series->Clear();
	j = 0;
	tablesize = 0;
	label15->Text = "";
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
};
}
