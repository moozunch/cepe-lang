#include <bits/stdc++.h>
using namespace std;

//Subprogram check
bool anagram (const string kata1, const string kata2) {
    if (kata1.length() != kata2.length()) {
        return false;
    }
    unordered_map <char, int> freq; // pakai unit unordered map, bakal ngecheck Jadi, freq adalah sebuah unordered map yang akan digunakan untuk menghitung frekuensi kemunculan setiap karakter dalam string. char untuk karakternya dan int seberapa muncul sering kemunculan karakternya

    // Menghitung frekuensi kemunculan setiap karakter dalam kata1
    for (char c : kata1) {
        freq [c]++;
    }

    for (char c : kata2) {
        if (--freq[c] < 0 ) {
            return false;
        }
    }
    return true;
}

int main () {
    system ("cls");
    string kata1, kata2;
    cout << "Masukkan sebuah kata: "; cin >> kata1;
    cout << "Masukkan anagram kata: "; cin >> kata2;

    if (anagram(kata1,kata2)) {
        cout << "Benar" << endl;
    } else{
        cout << "Salah" << endl;
    }
    auto start = std::chrono::high_resolution_clock::now();

    return 0;
}
