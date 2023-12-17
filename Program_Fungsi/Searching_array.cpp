#include <iostream>
using namespace std;

int max_size();
void searching(int arr[], int size);

int main(){
    int value = max_size();
    int array[value];
    searching(array,value);  
}

int max_size(){
    int size;
    cout << "masukan ukuran array : ";
    cin >> size;
    if(size > 0){
        return size;
    }else{
        cout << "Ukuran array tidak boleh kurang dari 1!";
        return 1;
    }
}

void searching(int arr[], int size){
    int i, search;
    for(i = 0; i < size; i++){
        cout << "masukan index ke " << i << " : ";
        cin >> arr[i];
    }
    cout << "Masukan Nilai yang ingin dicari : ";
    cin >> search;

    cout << endl;
    for (i = 0; i < size; i++)
    {    
        if(arr[i] == search){
            cout << "nilai yang dicari berada di index ke " << i << endl;
        }else{
            cout << "nilai yang dicari tidak ada di index ke " << i << endl;
        }
    } 
}