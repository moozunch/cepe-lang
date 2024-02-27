#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B;
    char op;
    cin >> A >> op >> B;

    if (op == '+') {
        cout << A + B << endl;
    } else if (op == '-') {
        cout << A - B << endl;
    } else if (op == '*') {
        cout << A * B << endl;
    } else if (op == '<') {
        cout << (A < B ? "benar" : "salah") << endl; //apakah benar ? jika true keluarkan benar, selainnya salah
    } else if (op == '>') {
        cout << (A > B ? "benar" : "salah") << endl;
    } else if (op == '=') {
        cout << (A == B ? "benar" : "salah") << endl;
    }

    return 0;
}
