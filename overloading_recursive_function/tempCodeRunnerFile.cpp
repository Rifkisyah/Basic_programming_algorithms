#include <iostream>
using namespace std;

void biodata(string nama, int umur, char gender){
    cout << nama << endl << umur << endl << gender;
}
void biodata(double tb, float bb){
    cout << tb << endl << bb;
}
void biodata(int uang_harian, int mingguan, int bulanan){
    cout << uang_harian + mingguan + bulanan;
}

int main(){
    biodata("joko",50,'L');
    biodata(170.456,60.5f);
    biodata(10000,50000,250000);
}