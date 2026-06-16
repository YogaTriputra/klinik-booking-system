#include "../include/pasien.h"

Pasien dataPasien[100];
int jumlahPasien = 0;

void tambahPasien() {
    cout << "\n=== Tambah Pasien ===" << endl;

    cout << "ID Pasien      : ";
    cin >> dataPasien[jumlahPasien].idPasien;

    cin.ignore();

    cout << "Nama Pasien    : ";
    getline(cin, dataPasien[jumlahPasien].nama);

    cout << "Umur           : ";
    cin >> dataPasien[jumlahPasien].umur;

    cin.ignore();

    cout << "Nomor Telepon  : ";
    getline(cin, dataPasien[jumlahPasien].nomorTelepon);

    jumlahPasien++;

    cout << "\nData pasien berhasil ditambahkan.\n";
}

void tampilPasien() {
    cout << "\n=== Data Pasien ===\n";

    if (jumlahPasien == 0) {
        cout << "Belum ada data pasien.\n";
        return;
    }

    for (int i = 0; i < jumlahPasien; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "ID     : " << dataPasien[i].idPasien << endl;
        cout << "Nama   : " << dataPasien[i].nama << endl;
        cout << "Umur   : " << dataPasien[i].umur << endl;
        cout << "No HP  : " << dataPasien[i].nomorTelepon << endl;
    }
}

void editPasien() {
    string id;

    cout << "\nMasukkan ID Pasien yang ingin diedit: ";
    cin >> id;

    for (int i = 0; i < jumlahPasien; i++) {
        if (dataPasien[i].idPasien == id) {

            cin.ignore();

            cout << "Nama Baru : ";
            getline(cin, dataPasien[i].nama);

            cout << "Umur Baru : ";
            cin >> dataPasien[i].umur;

            cin.ignore();

            cout << "No HP Baru : ";
            getline(cin, dataPasien[i].nomorTelepon);

            cout << "\nData berhasil diupdate.\n";
            return;
        }
    }

    cout << "\nPasien tidak ditemukan.\n";
}

void hapusPasien() {
    string id;

    cout << "\nMasukkan ID Pasien yang ingin dihapus: ";
    cin >> id;

    for (int i = 0; i < jumlahPasien; i++) {

        if (dataPasien[i].idPasien == id) {

            for (int j = i; j < jumlahPasien - 1; j++) {
                dataPasien[j] = dataPasien[j + 1];
            }

            jumlahPasien--;

            cout << "\nData berhasil dihapus.\n";
            return;
        }
    }

    cout << "\nPasien tidak ditemukan.\n";
}