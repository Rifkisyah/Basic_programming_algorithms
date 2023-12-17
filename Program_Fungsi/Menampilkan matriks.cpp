#include <iostream>
using namespace std;

int arr1();
int arr2();
void input_output(int** matriks, int size1, int size2);
void deallocateMatrix(int** matriks, int size1);

int main() {
    int size1, size2;
    size1 = arr1();
    size2 = arr2();

    // Alokasi memori dinamis untuk matriks
    int** array_2d = new int*[size1];
    for (int i = 0; i < size1; ++i) {
        array_2d[i] = new int[size2]; 
    }

    input_output(array_2d, size1, size2);

    // Bebaskan memori setelah digunakan
    deallocateMatrix(array_2d, size1);
}

int arr1() {
    int input1;
    cout << "Masukkan nilai maksimal dari baris: ";
    cin >> input1;
    return input1;
}

int arr2() {
    int input2;
    cout << "Masukkan nilai maksimal dari kolom: ";
    cin >> input2;
    return input2;
}

void input_output(int** matriks, int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << "Masukkan nilai array index ke [" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    cout << "Maka Keseluruhan nilai matriksnya adalah:\n";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << " | " << matriks[i][j];
        }
        cout << " |\n";
    }
}

void deallocateMatrix(int** matriks, int size1) {
    // Bebaskan setiap baris matriks
    for (int i = 0; i < size1; ++i) {
        delete[] matriks[i];
    }

    // Bebaskan array utama
    delete[] matriks;
}
