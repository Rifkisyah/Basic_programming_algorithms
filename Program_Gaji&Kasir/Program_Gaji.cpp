/*TUGAS #3 GAJI PEGAWAI
NAMA : RIFKI SYAHDAN PRASETYO
KELAS: IF-C*/

#include <iostream>
#include <cstdio>
using namespace std;

//prototype
void program();

int main()
{
	program();
	return 0;
}

//program prototype
void program(){
	int NoPegawai,GajiPokok,JumlahJamLembur,Tunjangan,UpahLembur,Total;
	string Nama;
	
	cout << "********************PROGRAM GAJI*********************"<<endl<<endl;
	
	cout << "NOMOR PEGAWAI\t\t: ";
	cin >> NoPegawai;
	cout << "NAMA PEGAWAI\t\t: ";
	cin >> Nama;
	cout << "GAJI POKOK\t\t: Rp.";
	cin >> GajiPokok;
	cout << "JUMLAH JAM LEMBUR\t: ";
	cin >> JumlahJamLembur;
	
	cout << "*****************************************************"<<endl<<endl;
	
	if (GajiPokok > 0){
		Tunjangan = 0.10 * GajiPokok;
	}
	if (UpahLembur > 0){
		UpahLembur = 0.05*GajiPokok*JumlahJamLembur;
	}
	Total = GajiPokok+Tunjangan+UpahLembur;
	
	cout << "NOMOR PEGAWAI\t\t: " << NoPegawai<<endl;
	cout << "NAMA PEGAWAI\t\t: " << Nama<<endl;
	cout << "GAJI POKOK\t\t: Rp." << GajiPokok<<endl;
	cout << "TUNJANGAN KERJA\t\t: Rp." << Tunjangan<<endl;
	cout << "UPAH LEMBUR\t\t: Rp." << UpahLembur<<endl;
	cout << "TOTAL GAJI\t\t: Rp." << Total;
	flush(cout);
}
