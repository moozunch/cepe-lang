#include <bits/stdc++.h>
using namespace std;

// Note: Logika nya sudah benar tapi yang digunakan untuk konversi string ke integer nya belum tauuu, tapi untuk rumus udah benar kok.

int main () {
    string A, B; 
    cin >> A >> B;
    int perkalian;
    int penjumlahan = 0;
    int angkaA[A.length()];
    int angkaB[B.length()];
    //int angkaA = stoi(A);
    //int angkaB = stoi(B);

    for (int i = 0; i <= A.length(); i++) {
        //cout << A[i] << endl; untuk tes working or not
        for (int j = 0; j <= B.length(); j++) {
            angkaA[i] = stoi(A[i])
            angkaB[j] = stoi(B[j]) // Definitely can't use stoi
            perkalian = angkaA[i] * angka[j];
            //cout << B[j];
            penjumlahan += perkalian;
        } 
    }
    cout << penjumlahan << endl;
    return 0;
} 
