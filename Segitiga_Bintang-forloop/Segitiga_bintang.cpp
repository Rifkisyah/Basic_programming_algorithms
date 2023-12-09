#include <iostream>
using namespace std;

void pola_pertama(int pola){
    for(int i = 1; i <= 5; i++){
        for(int j = i; j <= 5; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        for(int l = 1; l < i; l++){
            cout << "*";
        }
        for(int m = i; m <= 5; m++){
            cout << " ";
        }
        cout << endl;
    }
}

void pola_kedua(int pola){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << " ";
        }
        for(int k = i; k <= 5; k++){
            cout << "*";
        }
        for(int l = i; l < 5; l++){
            cout << "*";
        }
        for(int m = 1; m <= i; m++){
            cout << " ";
        }
        cout << endl;
    }
}

void pola_ketiga(int pola){
    for(int i = 1; i <= 5; i++){
        for(int j = i; j <= 5; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        for(int l = 1; l < i; l++){
            cout << "*";
        }
        for(int m = i; m <= 5; m++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i+1; j++){
            cout << " ";
        }
        for(int k = i; k <= 4; k++){
            cout << "*";
        }
        for(int l = i; l < 4; l++){
            cout << "*";
        }
        for(int m = 1; m <= i+1; m++){
            cout << " ";
        }
        cout << endl;
    }
}

void pola_keempat(int pola){
    for(int i = 1; i <= 5; i++){
        for(int j = i; j <= 5; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        for(int l = 1; l < i; l++){
            cout << "*";
        }
        for(int m = i; m <= 5; m++){
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 1; i <= 5; i++){
        for(int j = i; j <= 5; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        for(int l = 1; l < i; l++){
            cout << "*";
        }
        for(int m = i; m <= 5; m++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int tentukan_pola;

    do{
    cout << "Tentukan pola berapa yang akan di akses (1-4) : ";
    cin >> tentukan_pola;

    if(tentukan_pola == 1){
        pola_pertama(tentukan_pola);
    }else if(tentukan_pola == 2){
        pola_kedua(tentukan_pola);
    }else if(tentukan_pola == 3){
        pola_ketiga(tentukan_pola);
    }else if(tentukan_pola == 4){
        pola_keempat(tentukan_pola);
    }else{
        cout << "masukan akses pola yang benar!" << endl;
    }
    }while(tentukan_pola < 1 || tentukan_pola > 4);
}