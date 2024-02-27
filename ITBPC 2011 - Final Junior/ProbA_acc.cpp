#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Mengurutkan karakter-karakter dalam kedua string
    sort(s.begin(), s.end());
    sort(t.begin(), t.end()); // Jadi di sort aja walaupun dua duanya acak tapi kalau di sort seharusnya jadi sama

    // Membandingkan string yang telah diurutkan
    if (s == t) {
        cout << "Benar" << endl;
    } else {
        cout << "Salah" << endl;
    }

    // Baru ke accepted, jadi even variabel yang digunakan, inputann dan keluaran pun harus sama, even yang keluaran diawal yang mintak "Masukkan" itu, kalau ga disuruh gausah dilakuin.
    return 0;
}
