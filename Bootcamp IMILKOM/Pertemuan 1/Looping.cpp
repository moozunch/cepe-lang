#include <iostream>
using namespace std;


int main () {
    system ("cls");
    int n, m;
    cout << "Masukkan N: "; cin >> n;
    cout << "Masukkan M: "; cin >> m;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
