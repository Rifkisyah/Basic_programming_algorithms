#include <iostream>
using namespace std;

int main(){
    int max_size, array[max_size], random_data;
    
    cout << "masukan ukuran maximal array : ";
    cin >> max_size;

    for (int i = 0; i < max_size; i++){
        cout << "Masukan index ke " << i << " : ";
        cin >> array[i]; 
    }

    for (int i = 0; i < max_size; i++){
        for(int j = i+1; j < max_size; j++){
            if(array[j] < array[i]){
                random_data = array[i];
                array[i] = array[j];
                array[j] = random_data;
            }    
        }
    }
    cout << "Data di urutkan menjadi : " << endl;
    for(int i = 0; i < max_size; i++){
        cout << array[i] << " ";
    }
    

}