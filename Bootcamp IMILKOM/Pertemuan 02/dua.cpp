#include <iostream>
using namespace std;
//Dynamic array - untuk array yang tidak diketahui nilainya dan tidak menentu, karena sayang memory habis kalau kita langsung alokasi array dengan nilai yang besar. Sebenarnya bisa pakai pointer juga, tapi lebih baik pakai vector apalagi untuk cepe

int main(){
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;

    // Alokasi dinamis array
    int *dynamicArray = new int[a];

    // Input elemen array
    cout << "Enter " << a << " elements for the array:" << std::endl;
    for (int i = 0; i < a; i++) {
        cin >> dynamicArray[i];
    }

    // Menampilkan elemen array
    cout << "Array elements: ";
    for (int i = 0; i < a; i++) {
        cout << dynamicArray[i] << " ";
    }

    // Jangan lupa untuk membebaskan memori setelah selesai digunakan
    delete[] dynamicArray;

    return 0;
}