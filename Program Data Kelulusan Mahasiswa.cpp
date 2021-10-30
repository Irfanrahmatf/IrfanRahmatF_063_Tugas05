//Program Data Kelulusan Mahasiswa

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	char tahun[1000][30];
	int i,jumlahtahun,data1[1000],data2[1000],data_rata10,data_rata15,data_rata20;
	
    cout<<"\n\t========================================================";
	cout<<"\n\t              Data Kelulusan Mahasiswa              ";
	cout<<"\n\t         Prodi Teknik Komputer & Teknik Elektro     ";
	cout<<"\n\t========================================================";
	cout<<"\n";
	
	cout<<"\n\tMasukkan Jumlah Tahun : "; cin>>jumlahtahun;
	cout<<"\n";
	
	for (i=0;i<jumlahtahun;i++)
	{
		cout<<"\n\tData ke "<<i+1<<"";
		cout<<"\n\tTahun                : "; cin>>tahun[i];
		cout<<"\n\tNilai Teknik Komputer     : "; cin>>data1[i];
		cout<<"\n\tNilai Teknik Elektro      : "; cin>>data2[i];
		cout<<"\n";
	}
	
	cout<<"====================================================================\n\n";
	cout<<"|                 TABEL DATA KELULUSAN MAHASISWA                   |\n";
	cout<<"====================================================================\n";
	cout<<"| No.| Tahun Prodi |  Teknik  | Teknik  |   Rata-Rata Kelulusan    |\n";
	cout<<"|    |             | Komputer | Elektro |  per tahun Semua Prodi   |\n";
	cout<<"====================================================================\n";
	
	for (i=0;i<jumlahtahun;i++)
	{
		cout<<"| "<<setiosflags(ios::left)<<setw(3)<<i+1;
		cout<<"| "<<setiosflags(ios::left)<<setw(12)<<tahun[i];
		cout<<"| "<<setiosflags(ios::left)<<setw(9)<<data1[i];
		cout<<"| "<<setiosflags(ios::left)<<setw(8)<<data2[i];
		data_rata10=0.5*(data1[i]+data2[i]);
		cout<<"| "<<setiosflags(ios::left)<<setw(24)<<data_rata10<<" |";
		cout<<"\n|==================================================================|\n";
	}
	
	data_rata15=(data1[0]+data1[0]*0.5);
	data_rata20=(data2[0]+data2[0]*0.5);
	
	cout<<"|     Rata-Rata    | "<<setiosflags(ios::left)<<setw(9)<<data_rata15;
	cout<<"| "<<setiosflags(ios::left)<<setw(8)<<data_rata20;
	cout<<"|                          |"<<endl;
	cout<<"|Pertahun per Prodi|          |         |                          |"<<endl;
	cout<<"===================================================================="<<endl;

getch();		
}
