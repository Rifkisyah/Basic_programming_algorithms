#include<iostream>

using namespace std;

int main(){
 int bilangan;
 int index = 1;
 int sum = 0;

 cout<<"Masukan Bilangan : ";
 cin>>bilangan;

 for (index = 1; index <= bilangan; index++)
     if (bilangan % index == 0){
           sum++;
     }
     if(sum == 2){
           cout<< bilangan << " Merupakan Bilangan Prima ";
     }
     else{
           cout<< bilangan << " Bukan Bilangan Prima ";
     }
 return 0;
}
