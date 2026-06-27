#include "../include/pasien.h"


void sortingNama() {
    if (jumlahPasien == 0) {
        cout << "\nBelum ada data pasien.\n";
        return;
    }

    for (int i = 0; i < jumlahPasien - 1; i++) {
        for (int j = 0; j < jumlahPasien - 1 - i; j++) {
            if (dataPasien[j].nama > dataPasien[j + 1].nama) {
                Pasien temp = dataPasien[j];
                dataPasien[j] = dataPasien[j + 1];
                dataPasien[j + 1] = temp;
            }
        }
    }

    cout << "\nData pasien berhasil diurutkan berdasarkan nama.\n";

    cout << "\n=== Data Pasien (Urut Nama) ===\n";
    for (int i = 0; i < jumlahPasien; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "ID    : " << dataPasien[i].idPasien << endl;
        cout << "Nama  : " << dataPasien[i].nama << endl;
        cout << "Umur  : " << dataPasien[i].umur << endl;
        cout << "No HP : " << dataPasien[i].nomorTelepon << endl;
    }
}
