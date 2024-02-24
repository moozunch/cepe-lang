#include <iostream>
using namespace std;

int main () {
    system ("cls");
    int tinggi;
    cout << "Masukkan tinggi: "; cin >> tinggi;
    for (int i = tinggi; i >= 1; i--) {
        //cout << "*";
        for (int j = i; j > 1; j--) {
            cout << " "; //karena dia fill up sama spasi kosong jadi acuan utama kita si spasi.
        } 
        for (int k = i; k <= tinggi; k++) {
            cout << "*";
        }
        cout << " " << endl; //kebawah
    }
    
}
