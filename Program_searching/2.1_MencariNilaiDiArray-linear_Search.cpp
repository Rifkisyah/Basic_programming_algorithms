#include <iostream>
using namespace std;

int main(){
    int max_size;
    
    cout << "masukan jumlah maximal array : ";
    cin >> max_size;

    int array[max_size];
    
    for(int i = 0; i < max_size; i++){
        cout << "Masukan Nilai Array Ke " << i << " : ";
        cin >> array[i];
    }
    
    int search, data = 0;
    
    cout << "Masukan Nilai Yang Ingin Dicari :  ";
    cin >> search;
    for (int i = 0; i < max_size; i++){
        if(array[i] == search){
            data = 1;
            cout << "Nilai Ditemukan Di index ke " << i << endl;
        }
    }
    if(data == 0){
        cout << "Data Tidak Ditemukan";
    }
}