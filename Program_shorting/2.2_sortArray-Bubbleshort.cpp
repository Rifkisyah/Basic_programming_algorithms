#include <iostream>
using namespace std;

int main(){
    int max_size, array[max_size], temp;
    
    cout << "masukan ukuran maximal array : ";
    cin >> max_size;

    for (int i = 0; i < max_size; i++){
        cout << "Masukan index ke " << i << " : ";
        cin >> array[i]; 
    }

    for (int i = 0; i < max_size; i++){
        for(int j = i+1; j < max_size; j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }    
        }
    }
    cout << "Data di urutkan menjadi : " << endl;
    for(int i = 0; i < max_size; i++){
        cout << array[i] << " ";
    }
    

}