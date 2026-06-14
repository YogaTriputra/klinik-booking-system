#ifndef PASIEN_H
#define PASIEN_H

#include <iostream>
#include <string>
using namespace std;

struct Pasien {
    string idPasien;
    string nama;
    int umur;
    string nomorTelepon;
};

extern Pasien dataPasien[100];
extern int jumlahPasien;

// CRUD
void tambahPasien();
void tampilPasien();
void editPasien();
void hapusPasien();

// Searching
int cariPasienById(string idPasien);
int cariPasienByNama(string nama);

// Sorting
void sortingNama();

// Queue
void enqueuePasien();
void dequeuePasien();
void tampilAntrian();

// Stack
void pushRiwayat(Pasien pasien);
void tampilRiwayat();

// Linked List
void tambahNodePasien(Pasien pasien);
void tampilLinkedList();

#endif