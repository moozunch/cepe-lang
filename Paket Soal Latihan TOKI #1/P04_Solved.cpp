#include <bits/stdc++.h>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int penjumlahan = 0;

    vector<int> angkaA, angkaB;
    for (char c : A) {
        angkaA.push_back(c - '0'); // konversi karakter ke integer
    }
    for (char c : B) {
        angkaB.push_back(c - '0'); // konversi karakter ke integer
    }
    //Penjumlahan disini
    for (int i = 0; i < angkaA.size(); i++) {
        for (int j = 0; j < angkaB.size(); j++) {
            penjumlahan += angkaA[i] * angkaB[j];
        }
    }
    cout << penjumlahan << endl;

    return 0;
}
