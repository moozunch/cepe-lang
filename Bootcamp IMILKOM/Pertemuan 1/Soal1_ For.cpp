#include <bits/stdc++.h>
using namespace std;

int main() 
{
    system ("cls");
    int n;
    cout<< "Masukan N :";
    cin >> n;
    bool lampu = false; 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
        lampu = !lampu; //negasikan, jadi ketika n nya bisa dibagi i maka dia akan di negasikan ntah itu hidup/mati.
        }
    }

    if (lampu) { //if lampu is true 
    cout << "lampu menyala" << endl;
    } else {
         cout << "lampu mati" << endl;
    }

    return 0;
}
