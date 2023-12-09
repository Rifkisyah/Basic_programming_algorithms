#include <iostream>
using namespace std;

int main(){
    int max_size;
    cout << "input max size array : ";
    cin >> max_size;

    int array[max_size];
    int index = 0;
    for(int i = 0; i < max_size; i++){
        cout << "array index " << index << " : ";
        cin >> array[i];
        index++;
    }

    int sum = 0;
    for(int i = 0; i < max_size; i++){
        sum += array[i]; 
    }
    cout << "maka kesuluruhan penjumlahan nilai arraynya adalah : " << sum;
}