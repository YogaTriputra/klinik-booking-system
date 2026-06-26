#include "../include/pasien.h"

int cariPasienById(string idPasien) {
    for (int i = 0; i < jumlahPasien; i++) {
        if (daftarPasien[i].idPasien == idPasien) {
            return i; 
        }
    }
    return -1; 
}

int cariPasienByNama(string nama) {
    for (int i = 0; i < jumlahPasien; i++) {
        if (daftarPasien[i].nama == nama) {
            return i; 
        }
    }
    return -1; 
}
