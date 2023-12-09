#include <iostream>
using namespace std;

int main(){
    int array[5]={60, 75, 80, 55, 90};

    cout << " nilai array yang lebih dari 75 adalah : ";
    for (int i = 0; i < 5; i++)
    {
        if(array[i] > 75){
            cout << array[i] << " ";
        }
    }
    
    
}