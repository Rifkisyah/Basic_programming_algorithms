#include <iostream>
using namespace std;

void input(int value);
void prima(int input);

int main()
{
    int in;
    input(in);
}

void input(int value){
    cout << "Masukan Nilai : ";
    cin >> value;
    prima(value);
}

void prima(int input){
    int condition = 0;
    for (int i = 1; i <= input; i++)
     if (input % i == 0){
           condition++;
     }
     if(condition == 2){
           cout << " Merupakan Bilangan Prima ";
     }
     else{
           cout << " Bukan Bilangan Prima ";
     }
}