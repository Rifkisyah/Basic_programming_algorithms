#include <iostream>
using namespace std;

int faktorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}

int main(){
    int a;
    cout << "masukan angka yang akan dicari faktorialnya : ";
    cin >> a;
    cout << faktorial(a);
}
