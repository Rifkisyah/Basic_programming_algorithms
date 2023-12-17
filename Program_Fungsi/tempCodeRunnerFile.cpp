#include <iostream>
using namespace std;

void input_uang();
float pecahan_50(float nilai, float pecahan);

int main(){
    input_uang();
}

void input_uang(){
    float input, input_pecahan;
    cout << "masukan uang : ";
    cin >> input;
    cout << "masukan jumlah pecahnya : ";
    cin >> input_pecahan;
    cout << "jumlah uang pecahannya menjadi " << pecahan_50(input, input_pecahan) << " dan terdapat " << input_pecahan << " lembar"; 

}

float pecahan_50(float nilai, float pecahan){
    float sum;
    return sum = nilai / pecahan;
}