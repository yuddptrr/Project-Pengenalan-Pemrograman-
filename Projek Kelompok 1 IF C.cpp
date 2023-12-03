#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

using namespace std;

class customer
{
	private:
	public:
	string namacust;
    int model;
    string no_mbl;
    char data;

};

class rental : public customer
{
	public:
	int days = 0, rentalfee = 0;
	int admin = 10;
	int asuransi;
	int total;
	void data()
	{
    int login();
	login();
	cout << "\t\t\t\tMasukkan Nama Pelanggan: ";
    cin >> namacust;
    cout << endl;

    do
    {
        cout <<"\t\t\t\tPilih Model Mobil" << endl;
        cout << "\t\t\t\tKetik '1' Untuk Toyota Avanza 2015." << endl;
        cout << "\t\t\t\tKetik '2' Untuk Daihatsu Sigra 2018." << endl;
        cout << "\t\t\t\tKetik '3' Untuk Toyota Innova 2017." << endl;
        cout << endl;
        cout << "\t\t\t\tPilih Sebuah Mobil Dari Opsi Diatas: ";
        cin >> model;
        cout << endl;
        cout << "--------------------------------------------------------------------------"<<endl;

    switch(model)
    {
    case 1:
        {
        system("CLS");
        cout << "Anda Telah Memilih Model Toyota Avanza 2015" << endl;
        ifstream inA("A.txt");
        char str[200];
        while(inA) {
        inA.getline(str, 200);
        if(inA) cout << str << endl;
    }
   sleep(2);
   break;
        }
  case 2:
      {
  	system("CLS");
		 cout << "Anda Telah Memilih Model Daihatsu Sigra 2018" << endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB) {
         inB.getline(str, 200);
         if(inB) cout << str << endl;
     }
     sleep(2);
     break;
      }
    case 3:
        {
 	system("CLS");
	     cout << "Anda Telah Memilih Model Toyota Innova 2017" << endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC) {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
         }
     sleep(2);
     break;
     }
    default: {
            cerr << "Model Mobil Salah, Pilih Lagi!!!" << endl;
            }
        }
    }

while(model != 1 && model != 2 &&  model != 3 );
    cout << "--------------------------------------------------------------------------"<<endl;
    cout << "Masukkan Informasi Berikut: " << endl;
    cout << "Pilih Sebuah Mobil No. : ";
    cin >> no_mbl;
    cout << "Masukkan Berapa Hari Penyewaan Mobil: ";
    cin >> days;
    cout << endl;
	}

void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Menghitung Biaya rental. Mohon Tunggu......"<<endl;
		sleep(2);
		if(model = 1)
        rentalfee = days * 350;
        asuransi = rentalfee / 10;
        total = rentalfee + asuransi + admin;
        if(model = 2)
        rentalfee = days * 220;
        asuransi = rentalfee / 10;
        total = rentalfee + asuransi + admin;
        if(model = 3)
        rentalfee = days*720;
        asuransi = rentalfee / 10;
        total = rentalfee + asuransi + admin;
    }

void showrental()
    {
    cout << "\n\t\t                       Rental Mobil - Invoice Pelanggan                 " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    cout << "\t\t	| Invoice No. :"<<"-----------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
    cout << "\t\t	| Nama Pelanggan :"<<"--------------------|" << setw(10) << namacust << " |" << endl;
    cout << "\t\t	| Model Mobil :"<<"-----------------------|" << setw(10) << model << " |" << endl;
    cout << "\t\t	| Mobil No. :"<<"-------------------------|" << setw(10) << no_mbl << " |" << endl;
    cout << "\t\t	| Lama Sewa (hari) :"<<"------------------|" << setw(10) << days << " |" << endl;
    cout << "\t\t	| Biaya Total Sewa :"<<"------------------|" << setw(10) << rentalfee << "K|" << endl;
    cout << "\t\t	| Biaya Asuransi :"<<"--------------------|" << setw(10) << asuransi << "K|" << endl;
    cout << "\t\t	| Biaya Admin :"<<"-----------------------|" << setw(10) << admin << "K|" << endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\n";
    cout << "\t\t	| Total Biaya Rental :" << "----------------|" << setw(10) << total << "K|" << endl;
    cout << "\t\t	 ________________________________________________________" << endl;
    cout << "\t\t	 # Invoice ini dihasilkan oleh komputer dan tidak" << endl;
    cout << "\t\t	 memerlukan tanda tangan resmi #" << endl;
    cout << " " << endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	Anda disarankan untuk membayar jumlah tersebut sebelum tanggal jatuh tempo." << endl;
    cout << "\t\t	Jika tidak, biaya penalti akan dikenakan"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thanks.txt");


  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}

void simpan()
{
    ofstream outputFile("Invoice.txt", ios::trunc);
    if (outputFile.is_open()) {
        outputFile << "\n\t\t                       Rental Mobil - Invoice Pelanggan                 " << endl;
        outputFile << "\t\t	///////////////////////////////////////////////////////////" << endl;
        outputFile << "\t\t	| Invoice No. :"<<"-----------------------|" << setw(10) << "#Cnb81353" << " |" << endl;
        outputFile << "\t\t	| Nama Pelanggan :"<<"--------------------|" << setw(10) << namacust << " |" << endl;
        outputFile << "\t\t	| Model Mobil :"<<"-----------------------|" << setw(10) << model << " |" << endl;
        outputFile << "\t\t	| Mobil No. :"<<"-------------------------|" << setw(10) << no_mbl << " |" << endl;
        outputFile << "\t\t	| Lama Sewa (hari) :"<<"------------------|" << setw(10) << days << " |" << endl;
        outputFile << "\t\t	| Biaya Total Sewa :"<<"------------------|" << setw(10) << rentalfee << "K|" << endl;
        outputFile << "\t\t	| Biaya Asuransi :"<<"--------------------|" << setw(10) << asuransi << "K|" << endl;
        outputFile << "\t\t	| Biaya Admin :"<<"-----------------------|" << setw(10) << admin << "K|" << endl;
        outputFile << "\t\t	 ________________________________________________________"<<endl;
        outputFile << "\n";
        outputFile << "\t\t	| Total Biaya Rental :" << "----------------|" << setw(10) << total << "K|" << endl;
        outputFile << "\t\t	 ________________________________________________________" << endl;
        outputFile << "\t\t	 # Invoice ini dihasilkan oleh komputer dan tidak" << endl;
        outputFile << "\t\t	 memerlukan tanda tangan resmi #" << endl;
        outputFile << " " << endl;
        outputFile << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        outputFile << "\t\t	Anda disarankan untuk membayar jumlah tersebut sebelum tanggal jatuh tempo." << endl;
        outputFile << "\t\t	Jika tidak, biaya penalti akan dikenakan"<<endl;
        outputFile << "\t\t	///////////////////////////////////////////////////////////" << endl;
        outputFile.close();
    } else {
        cout << "\n\tGagal membuka file untuk penulisan ulang!" << endl;
    }
}
};

class welcome
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt");

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout << "\nStarting the program please wait....." << endl;
  sleep(1);
  cout << "\nloading up files....." << endl;
  sleep(1);
  system ("CLS");
}

};

int main()
{
welcome obj1;
obj1.welcum();
rental obj2;

obj2.data();
obj2.calculate();
obj2.showrental();
obj2.simpan();
return 0;
}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tKetik Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

