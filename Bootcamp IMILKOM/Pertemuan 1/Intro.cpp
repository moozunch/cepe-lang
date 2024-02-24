#include <iostream>
using namespace std;

// scanf = cin
//kebanyakan untuk cepe pakai /n instead of endl

int main () {
    system ("cls");
    int x;
    cout << "Masukkan bilangan: "; cin >> x;
    if (x > 0) {
        cout << "Positif";
    }
    else if (x < 0) {
        cout << "Negatif";
    }
    else {
        cout << "Nol";
    }
    return 0;
}
