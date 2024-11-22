#pragma once
#include "Data.h"

namespace Meminjam2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Meminjamh
	/// </summary>
	public ref class Meminjamh : public System::Windows::Forms::Form
	{
	public:
		Meminjamh(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Meminjamh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RichTextBox^ rtbDeskripsi;
	protected:

	private: System::Windows::Forms::Button^ btMeminjam;
	private: System::Windows::Forms::Button^ btLogout;



	private: System::Windows::Forms::Label^ lbMeminjam;
	private: System::Windows::Forms::ListBox^ lbxList;

	private: System::Windows::Forms::Label^ lbBanyakHalaman;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbDeskripsi;
	private: System::Windows::Forms::Label^ lbStatus;


	private: System::Windows::Forms::Label^ lbNamaPenulis;

	private: System::Windows::Forms::TextBox^ tbBanyak;


	private: System::Windows::Forms::TextBox^ tbStatus;

	private: System::Windows::Forms::TextBox^ tbNamPenulis;

	private: System::Windows::Forms::ComboBox^ cbxNama;
	private: System::Windows::Forms::Label^ lbList;
	private: System::Windows::Forms::Button^ btClear;


	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Meminjamh::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->rtbDeskripsi = (gcnew System::Windows::Forms::RichTextBox());
			this->btMeminjam = (gcnew System::Windows::Forms::Button());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->lbMeminjam = (gcnew System::Windows::Forms::Label());
			this->lbxList = (gcnew System::Windows::Forms::ListBox());
			this->lbBanyakHalaman = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbDeskripsi = (gcnew System::Windows::Forms::Label());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->lbNamaPenulis = (gcnew System::Windows::Forms::Label());
			this->tbBanyak = (gcnew System::Windows::Forms::TextBox());
			this->tbStatus = (gcnew System::Windows::Forms::TextBox());
			this->tbNamPenulis = (gcnew System::Windows::Forms::TextBox());
			this->cbxNama = (gcnew System::Windows::Forms::ComboBox());
			this->lbList = (gcnew System::Windows::Forms::Label());
			this->btClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-6, -18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 892);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Meminjamh::pictureBox1_Click);
			// 
			// rtbDeskripsi
			// 
			this->rtbDeskripsi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->rtbDeskripsi->Location = System::Drawing::Point(633, 421);
			this->rtbDeskripsi->Name = L"rtbDeskripsi";
			this->rtbDeskripsi->ReadOnly = true;
			this->rtbDeskripsi->Size = System::Drawing::Size(253, 214);
			this->rtbDeskripsi->TabIndex = 1;
			this->rtbDeskripsi->Text = L"";
			// 
			// btMeminjam
			// 
			this->btMeminjam->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->btMeminjam->Location = System::Drawing::Point(624, 717);
			this->btMeminjam->Name = L"btMeminjam";
			this->btMeminjam->Size = System::Drawing::Size(213, 48);
			this->btMeminjam->TabIndex = 3;
			this->btMeminjam->Text = L"Pinjam";
			this->btMeminjam->UseVisualStyleBackColor = true;
			this->btMeminjam->Click += gcnew System::EventHandler(this, &Meminjamh::btMeminjam_Click);
			// 
			// btLogout
			// 
			this->btLogout->BackColor = System::Drawing::Color::Crimson;
			this->btLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->btLogout->ForeColor = System::Drawing::Color::DarkRed;
			this->btLogout->Location = System::Drawing::Point(1060, 717);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(191, 48);
			this->btLogout->TabIndex = 4;
			this->btLogout->Text = L"Log Out";
			this->btLogout->UseVisualStyleBackColor = false;
			this->btLogout->Click += gcnew System::EventHandler(this, &Meminjamh::btLogout_Click);
			// 
			// lbMeminjam
			// 
			this->lbMeminjam->AutoSize = true;
			this->lbMeminjam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->lbMeminjam->Location = System::Drawing::Point(648, 20);
			this->lbMeminjam->Name = L"lbMeminjam";
			this->lbMeminjam->Size = System::Drawing::Size(345, 51);
			this->lbMeminjam->TabIndex = 5;
			this->lbMeminjam->Text = L"Meminjam Buku";
			// 
			// lbxList
			// 
			this->lbxList->FormattingEnabled = true;
			this->lbxList->ItemHeight = 16;
			this->lbxList->Location = System::Drawing::Point(1060, 171);
			this->lbxList->Name = L"lbxList";
			this->lbxList->Size = System::Drawing::Size(249, 308);
			this->lbxList->TabIndex = 6;
			// 
			// lbBanyakHalaman
			// 
			this->lbBanyakHalaman->AutoSize = true;
			this->lbBanyakHalaman->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->lbBanyakHalaman->Location = System::Drawing::Point(429, 350);
			this->lbBanyakHalaman->Name = L"lbBanyakHalaman";
			this->lbBanyakHalaman->Size = System::Drawing::Size(173, 30);
			this->lbBanyakHalaman->TabIndex = 7;
			this->lbBanyakHalaman->Text = L"Banyak Halaman";
			this->lbBanyakHalaman->Click += gcnew System::EventHandler(this, &Meminjamh::lbBanyakHalaman_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->CausesValidation = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label2->Location = System::Drawing::Point(429, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nama Buku";
			// 
			// lbDeskripsi
			// 
			this->lbDeskripsi->AutoSize = true;
			this->lbDeskripsi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->lbDeskripsi->Location = System::Drawing::Point(429, 421);
			this->lbDeskripsi->Name = L"lbDeskripsi";
			this->lbDeskripsi->Size = System::Drawing::Size(100, 30);
			this->lbDeskripsi->TabIndex = 9;
			this->lbDeskripsi->Text = L"Deskripsi";
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->lbStatus->Location = System::Drawing::Point(429, 202);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(70, 30);
			this->lbStatus->TabIndex = 10;
			this->lbStatus->Text = L"Status";
			// 
			// lbNamaPenulis
			// 
			this->lbNamaPenulis->AutoSize = true;
			this->lbNamaPenulis->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->lbNamaPenulis->Location = System::Drawing::Point(429, 271);
			this->lbNamaPenulis->Name = L"lbNamaPenulis";
			this->lbNamaPenulis->Size = System::Drawing::Size(142, 30);
			this->lbNamaPenulis->TabIndex = 11;
			this->lbNamaPenulis->Text = L"Nama Penulis";
			this->lbNamaPenulis->Click += gcnew System::EventHandler(this, &Meminjamh::lbNamaPenulis_Click);
			// 
			// tbBanyak
			// 
			this->tbBanyak->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->tbBanyak->Location = System::Drawing::Point(633, 344);
			this->tbBanyak->Name = L"tbBanyak";
			this->tbBanyak->ReadOnly = true;
			this->tbBanyak->Size = System::Drawing::Size(253, 36);
			this->tbBanyak->TabIndex = 12;
			// 
			// tbStatus
			// 
			this->tbStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->tbStatus->Location = System::Drawing::Point(633, 199);
			this->tbStatus->Name = L"tbStatus";
			this->tbStatus->ReadOnly = true;
			this->tbStatus->Size = System::Drawing::Size(253, 36);
			this->tbStatus->TabIndex = 14;
			// 
			// tbNamPenulis
			// 
			this->tbNamPenulis->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->tbNamPenulis->Location = System::Drawing::Point(633, 268);
			this->tbNamPenulis->Name = L"tbNamPenulis";
			this->tbNamPenulis->ReadOnly = true;
			this->tbNamPenulis->Size = System::Drawing::Size(253, 36);
			this->tbNamPenulis->TabIndex = 15;
			// 
			// cbxNama
			// 
			this->cbxNama->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->cbxNama->FormattingEnabled = true;
			this->cbxNama->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"", L"Laut Bercerita", L"The Key Habits", L"Bumi",
					L"Harga Sebuah Percaya", L"Bulan", L"Ziarah"
			});
			this->cbxNama->Location = System::Drawing::Point(633, 131);
			this->cbxNama->Name = L"cbxNama";
			this->cbxNama->Size = System::Drawing::Size(253, 38);
			this->cbxNama->TabIndex = 16;
			this->cbxNama->SelectedIndexChanged += gcnew System::EventHandler(this, &Meminjamh::cbxNama_SelectedIndexChanged);
			// 
			// lbList
			// 
			this->lbList->AutoSize = true;
			this->lbList->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->lbList->Location = System::Drawing::Point(1041, 112);
			this->lbList->Name = L"lbList";
			this->lbList->Size = System::Drawing::Size(308, 30);
			this->lbList->TabIndex = 17;
			this->lbList->Text = L"List Buku yang Sudah Dipinjam";
			// 
			// btClear
			// 
			this->btClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.8F));
			this->btClear->Location = System::Drawing::Point(1060, 512);
			this->btClear->Name = L"btClear";
			this->btClear->Size = System::Drawing::Size(174, 48);
			this->btClear->TabIndex = 18;
			this->btClear->Text = L"Reset";
			this->btClear->UseVisualStyleBackColor = true;
			this->btClear->Click += gcnew System::EventHandler(this, &Meminjamh::btClear_Click);
			// 
			// Meminjamh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::LightBlue;
			this->ClientSize = System::Drawing::Size(1418, 861);
			this->Controls->Add(this->btClear);
			this->Controls->Add(this->lbList);
			this->Controls->Add(this->cbxNama);
			this->Controls->Add(this->tbNamPenulis);
			this->Controls->Add(this->tbStatus);
			this->Controls->Add(this->tbBanyak);
			this->Controls->Add(this->lbNamaPenulis);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->lbDeskripsi);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbBanyakHalaman);
			this->Controls->Add(this->lbxList);
			this->Controls->Add(this->lbMeminjam);
			this->Controls->Add(this->btLogout);
			this->Controls->Add(this->btMeminjam);
			this->Controls->Add(this->rtbDeskripsi);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Meminjamh";
			this->Text = L"Meminjamh";
			this->Load += gcnew System::EventHandler(this, &Meminjamh::Meminjamh_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		private: System::Void settervariabelBuku1() {
			tbNamPenulis->Text = "Leila S. Chudori";
			tbBanyak->Text = "379";
			tbStatus->Text = Status1;
			rtbDeskripsi->Text = "Laut Bercerita mengisahkan tentang sekelompok aktivis mahasiswa yang hilang pada tahun 1998. Hilangnya aktivis mahasiswa ini masih menjadi misteri besar yang belum terungkap hingga saat ini.";
		}
		private: System::Void settervariabelBuku2() {
			tbNamPenulis->Text = "Ardi Darmawan";
			tbBanyak->Text = "209";
			tbStatus->Text = Status2;
			rtbDeskripsi->Text = "Buku ini menjelaskan salah satu cara yang paling efektif untuk meraih keberhasilan hidup, yaitu dengan menerapkan kebiasaan yang tepat. "
				"Buku ini menjelaskan cara mengenali dan membentuk kebiasaan melalui tiga langkah konkret, yaitu memahami cara kerja kebiasaan, mengubah kebiasaan buruk, dan merancang penerapan kebiasaan untuk meraih tujuan tertentu. "
				"Setiap langkah dilengkapi contoh konkret dan kisah nyata dari orang-orang yang pernah mengalaminya. "
				"Ini menunjukkan bahwa keberhasilan tidak dihasilkan oleh satu tindakan saja, melainkan kebiasaan yang dilakukan berulang-ulang.";
		}
		private: System::Void settervariabelBuku3() {
			tbNamPenulis->Text = "Tere Liye";
			tbBanyak->Text = "280";
			tbStatus->Text = Status3;
			rtbDeskripsi->Text = "Novel berjudul Harga Sebuah Percaya ini menceritakan perjalanan cinta Jim, pemuda yang berhati lembut. Ia harus merasakan patah hati setelah cinta pertamanya meninggalkannya. Lalu, saat ia sudah terbiasa dengan situasi itu, ia bertemu dengan Nayla dan akhirnya Jim jatuh hati kepada Nayla. "
				"Jim, seorang pemuda miskin yang jatuh cinta dengan Nayla, gadis bangsawan dari luar negeri. Cinta mereka tidak bisa bersatu karena status, Nayla akan dinikahkan dengan pria pilihan orang tuanya. "
				"Naasnya, kisah cinta kedua Jim tidak berjalan mulus, Nayla yang kabur dengan Jim karena menolak perjodohan yang dibuat orang tua Nayla berakhir dengan tragis. Nayla bunuh diri dengan meminum racun.Lantas, bagaimana kehidupan Jim selanjutnya setelah ia ditinggal kedua kalinya oleh wanita yang ia cintai ? ";
		}
		private: System::Void settervariabelBuku4() {
			tbNamPenulis->Text = "Tere Liye";
			tbBanyak->Text = "438";
			tbStatus->Text = Status4;
			rtbDeskripsi->Text = "Bumi, merupakan rangkaian awal dari kisah sekelompok anak remaja berkemampuan istimewa. Menceritakan tentang Raib, Ali, dan Seli yang bertualang ke dunia paralel. Mereka yang istimewa, mampu pergi ke dunia pararel bumi, bertemu dengan klan lain dan berhadapan dengan Tamus yang memiliki ambisi membebaskan si Tanpa Mahkota dan kemudian, menguasai bumi.";

		}
		private: System::Void settervariabelBuku5() {
			tbNamPenulis->Text = "Tere Liye";
			tbBanyak->Text = "400";
			tbStatus->Text = Status5;
			rtbDeskripsi->Text = "Novel Bulan menceritakan persahabatan Raib, Seli, Ali yang diajak Miss Selena dan Av untuk melakukan diplomasi dengan Klan Matahari. Tujuan mereka adalah membuka portal yang telah ribuan tahun yang lalu tertutup rapat. Mereka juga waspada dengan Tamus dan pasukannya yang masih berusaha keluar dari penjara kegelapan.";
		}
		private: System::Void settervariabelBuku6() {
			tbNamPenulis->Text = "Paulo Coelho";
			tbBanyak->Text = "264";
			tbStatus->Text = Status6;
			rtbDeskripsi->Text = "The Pilgrimage membuka jalan bagi Sang Alkemis karya Paulo Coelho untuk menjadi novel terlaris di tingkat internasional. Dalam banyak hal, kedua buku ini tak terpisahkan dan perlu dibaca kedua-duanya untuk memahaminya secara utuh. "
				"Dalam buku ini kita diajak mengikuti perjalanan ziarah Coelho sepanjang jalan menuju Santiago. Parabel ini menjajaki kebutuhan manusia untuk menemukan jalannya sendiri. Pada akhirnya kita mendapati bahwa segala sesuatu yang luar biasa selalu ditemukan dalam hal-hal sederhana, melalui orang orang yang kita jumpai sehari-hari. "
				"Kisah yang memikat ini berisi petualangan sekaligus tuntunan untuk menemukan jati diri dan pencerahan.";
		}
		String^ Status1 = "Not Booked";
		String^ Status2 = "Not Booked";
		String^ Status3 = "Not Booked";
		String^ Status4 = "Not Booked";
		String^ Status5 = "Not Booked";
		String^ Status6 = "Not Booked";
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lbNamaPenulis_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbBanyakHalaman_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cbxNama_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbxNama->Text->Length == 0) {
		tbNamPenulis->Clear();
		tbBanyak->Clear();
		tbStatus->Clear();
		rtbDeskripsi->Clear();
	}
	else if (cbxNama->Text == "Laut Bercerita") {
		settervariabelBuku1();
		if (Status1 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
	else if (cbxNama->Text == "The Key Habits") {
		settervariabelBuku2();
		if (Status2 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
	else if (cbxNama->Text == "Harga Sebuah Percaya") {
		settervariabelBuku3();
		if (Status3 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
	else if (cbxNama->Text == "Bumi") {
		settervariabelBuku4();
		if (Status4 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
	else if (cbxNama->Text == "Bulan") {
		settervariabelBuku5();
		if (Status6 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
	else if (cbxNama->Text == "Ziarah") {
		settervariabelBuku6();
		if (Status6 == "Booked") {
			btMeminjam->Enabled = false;
		}
		else {
			btMeminjam->Enabled = true;
		}
	}
}
private: System::Void btLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btMeminjam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cbxNama->Text == "Laut Bercerita") {
		Status1 = "Booked";
		lbxList->Items->Add("Laut Bercerita");
		
	}
	else if (cbxNama->Text == "The Key Habits") {
		Status2 = "Booked";
		lbxList->Items->Add("The Key Habits");
	}
	else if (cbxNama->Text == "Harga Sebuah Percaya") {
		Status3 = "Booked";
		lbxList->Items->Add("Harga Sebuah Percaya");
	}
	else if (cbxNama->Text == "Bumi") {
		Status4 = "Booked";
		lbxList->Items->Add("Bumi");
	}
	else if (cbxNama->Text == "Bulan") {
		Status5 = "Booked";
		lbxList->Items->Add("Bulan");
	}
	else if (cbxNama->Text == "Ziarah") {
		Status6 = "Booked";
		lbxList->Items->Add("Ziarah");
	}


	cbxNama->Text = "";
	tbBanyak->Text = "";
	tbNamPenulis->Text = "";
	tbStatus->Text = "";
	rtbDeskripsi->Text = "";
}
private: System::Void btClear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lbxList->Items->Count != 0) {
		lbxList->Items->Clear();
		Status1 = "Not Booked";
		Status2 = "Not Booked";
		Status3 = "Not Booked";
		Status4 = "Not Booked";
		Status5 = "Not Booked";
		Status6 = "Not Booked";
	}
	else {
		MessageBox::Show("List Kosong");
	}
}
private: System::Void Meminjamh_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
