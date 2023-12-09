/*TUGAS #2 PROGRAM KASIR
NAMA : RIFKI SYAHDAN PRASETYO
KELAS: IF-C*/

#include <iostream>
using namespace std;

void ProgramKasir();

int main()
{
    ProgramKasir();
    return 0;
}

void ProgramKasir(){
	string NamaKasir,NamaBarang;
    int NoBarang,Harga,JumlahBarang,JumlahYangDibayar,Potongan,Pembayaran,Kembalian;

    cout << "********************PROGRAM KASIR TOKO KELONTONG********************"<<endl<<endl;
    cout << "NAMA KASIR\t: ";
    cin >> NamaKasir;
    cout << "NO BARANG\t: ";
    cin >> NoBarang;
    cout << "NAMA BARANG\t: ";
    cin >> NamaBarang;
    cout << "HARGA\t\t: Rp.";
    cin >> Harga;
    cout << "JUMLAH BARANG\t: ";
    cin >> JumlahBarang;
    
    cout << "********************************************************************"<<endl;
    JumlahYangDibayar = Harga * JumlahBarang;
    cout << "JUMLAH YANG HARUS DIBAYAR\t: Rp." << JumlahYangDibayar<<endl;
    
    cout << "POTONGAN\t\t\t: Rp.";
    cin >> Potongan;
    JumlahYangDibayar -= Potongan;
    
    cout << "PEMBAYARAN\t\t\t: Rp.";
    cin >> Pembayaran;
    
    Kembalian = Pembayaran - JumlahYangDibayar;
    cout<< "KEMBALIAN\t\t\t: Rp."<<Kembalian;
    
    flush(cout);
}
