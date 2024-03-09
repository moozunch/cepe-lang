#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> cities;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Kota\n";
        cout << "2. Tampilkan Semua Kota\n";
        cout << "3. Jumlah Kota\n";
        cout << "4. Hapus Kota\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string city;
                cout << "Masukkan nama kota: ";
                cin >> city;
                cities.push_back(city);
                cout << "Kota berhasil ditambahkan.\n";
                break;
            }
            case 2: {
                if (cities.empty()) {
                    cout << "Belum ada kota yang ditambahkan.\n";
                } else {
                    cout << "Daftar Kota:\n";
                    for (const auto &city : cities) {
                        cout << city << "\n";
                    }
                }
                break;
            }
            case 3:
                cout << "Jumlah total kota: " << cities.size() << "\n";
                break;
            case 4: {
                if (cities.empty()) {
                    cout << "Belum ada kota yang ditambahkan.\n";
                } else {
                    string cityToRemove;
                    cout << "Masukkan nama kota yang ingin dihapus: ";
                    cin >> cityToRemove;

                    auto it = find(cities.begin(), cities.end(), cityToRemove);
                    if (it != cities.end()) {
                        cities.erase(it);
                        cout << "Kota berhasil dihapus.\n";
                    } else {
                        cout << "Kota tidak ditemukan.\n";
                    }
                }
                break;
            }
            case 5:
                cout << "Keluar dari program.\n";
                return 0;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
