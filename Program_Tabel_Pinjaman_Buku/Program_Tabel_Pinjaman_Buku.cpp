#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main(){
    int max_size, max_size_of_table = 4;
    int i, penalty_start = 0, week = 7, penalty = 5000; 

    cout << "Masukan Jumlah Peminjam Buku : ";
    cin >> max_size;

    string data[max_size][max_size_of_table];
    int temp[max_size][max_size_of_table], temp2[max_size][max_size_of_table];

    for( i = 0; i < max_size; i++){
        cout << "masukan data Peminjam ke : ";
        cin >> data[i][0];
        cout << "Masukan nama peminjam : ";
        cin >> data[i][1];
        cout << "Masukan Lama Hari Pinjam : ";
        cin >> data[i][2];

        cout << endl;

        stringstream convert;
        convert << data[i][2];
        convert >> temp[i][2];

        stringstream convert2;
        convert2 << data[i][3];
        convert2 >> temp2[i][3];

        if( temp[i][2] > week ){
            temp2[i][3] = penalty * ( (temp[i][2] - 1) / week);
        }else{
            temp2[i][3] = penalty_start;
        }
    }
    
    system("cls");
    cout << "==||" << setw(20) << left << "DATA PEMINJAMAN BUKU||==" << endl
         << "----------------------------------------------------------------" << endl
         << " | " << setw(5) << left << "No"
         << " | " << setw(20) << left << "Nama Peminjam"
         << " | " << setw(20) << left << "Lama Hari pinjam"
         << " | " << setw(10) << left << "Denda | " << endl
         << "----------------------------------------------------------------" << endl;

    for(i = 0; i < max_size; i++){
        cout<< " | " << setw(5) << left << data[i][0]
            << " | " << setw(20) << left << data[i][1]
            << " | " << setw(20) << left << temp[i][2]
            << " | " << setw(5) << left << temp2[i][3] << " | " << endl
            << "----------------------------------------------------------------" << endl;
    } 
}