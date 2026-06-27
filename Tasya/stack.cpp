#include "../include/pasien.h"
#include <stack>


stack<Pasien> riwayat;

void pushRiwayat(Pasien pasien) {
    riwayat.push(pasien);
    cout << "\nPasien " << pasien.nama << " berhasil dimasukkan ke riwayat.\n";
}

void tampilRiwayat() {
    if (riwayat.empty()) {
        cout << "\nBelum ada riwayat pasien.\n";
        return;
    }

    stack<Pasien> temp = riwayat;

    cout << "\n=== Riwayat Pasien ===\n";
    int no = 1;
    while (!temp.empty()) {
        Pasien p = temp.top();
        cout << "\nRiwayat ke-" << no << endl;
        cout << "ID    : " << p.idPasien << endl;
        cout << "Nama  : " << p.nama << endl;
        cout << "Umur  : " << p.umur << endl;
        cout << "No HP : " << p.nomorTelepon << endl;
        temp.pop();
        no++;
    }
}
