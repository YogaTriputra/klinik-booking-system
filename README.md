# 🦷 Sistem Manajemen Klinik Gigi

## Deskripsi Proyek

Sistem Manajemen Klinik Gigi adalah program berbasis C++ yang dibuat untuk mengelola data pasien dengan menerapkan beberapa konsep Struktur Data, yaitu:

- Struct
- Array
- Pointer
- CRUD
- Searching
- Sorting
- Queue
- Stack
- Linked List

Proyek ini dikerjakan secara berkelompok sehingga diperlukan pembagian tugas yang jelas agar tidak terjadi konflik saat pengembangan maupun proses merge.

---

# 📁 Struktur Folder

```text
project/
│
├── include/
│   └── pasien.h
│
├── src/
│   ├── crud.cpp
│   ├── queue.cpp
│   ├── stack.cpp
│   ├── sorting.cpp
│   ├── searching.cpp
│   ├── linkedlist.cpp
│   └── main.cpp
│
└── README.md
```

---

# 📌 File Acuan Bersama (pasien.h)

Sebelum anggota mulai mengerjakan modul masing-masing, tim harus menyepakati file header utama yaitu:

```cpp
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
```

---

# 📌 Fungsi pasien.h

File `pasien.h` berfungsi sebagai kontrak bersama antar anggota tim.

Tujuannya agar seluruh anggota menggunakan:

- Struct yang sama
- Variabel global yang sama
- Nama fungsi yang sama
- Tipe data yang sama

Sehingga saat proses merge tidak terjadi error karena perbedaan struktur program.

---

# 📌 Wajib Ditambahkan Pada Semua File .cpp

Setiap file `.cpp` wajib menambahkan:

```cpp
#include "../include/pasien.h"
```

Contoh:

```cpp
#include "../include/pasien.h"

void tampilPasien() {

}
```

---

# 📌 Kenapa Harus Include pasien.h?

Tanpa include:

```cpp
Pasien pasien;
```

akan menghasilkan error:

```text
'Pasien' does not name a type
```

Karena compiler tidak mengetahui struct Pasien.

Selain itu, fungsi seperti:

```cpp
cariPasienById();
```

juga tidak akan dikenali jika prototype fungsi tidak diambil dari `pasien.h`.

---

# 📌 Implementasi Struktur Data

| Struktur Data | Implementasi |
|--------------|-------------|
| Struct | Menyimpan data pasien. |
| Array | Menyimpan seluruh data pasien. |
| Pointer | Digunakan pada Linked List (`Node* next`). |
| Searching | Linear / Sequential Search berdasarkan ID atau nama. |
| Sorting | Bubble Sort berdasarkan nama pasien (A-Z). |
| Queue | FIFO (First In First Out). |
| Stack | LIFO (Last In First Out). |
| Linked List | Singly Linked List. |

### Algoritma yang Digunakan

- Searching → Linear / Sequential Search
- Sorting → Bubble Sort (Ascending)
- Queue → FIFO (First In First Out)
- Stack → LIFO (Last In First Out)
- Linked List → Singly Linked List
```

---

# 📌 Alur Sistem

```text
Registrasi Pasien
       │
       ▼
   dataPasien[]
       │
       ├── Searching
       │
       ├── Sorting
       │
       └── Queue (Antrean Pasien)
                 │
                 ▼
          Pasien Dipanggil
                 │
                 ▼
        Stack (Riwayat)
                 │
                 ▼
 Linked List (Pasien Selesai)
```

# 📌 Rancangan Menu Utama

```text
=== SISTEM MANAJEMEN KLINIK GIGI ===

1. Tambah Pasien
2. Tampilkan Pasien
3. Update Pasien
4. Hapus Pasien
5. Cari Pasien
6. Urutkan Pasien
7. Masuk Antrian
8. Panggil Antrian
9. Tampilkan Riwayat
10. Tampilkan Data Linked List
0. Keluar
```

Menu ini dibuat untuk memenuhi ketentuan Final Project yang mencakup CRUD, Searching, Sorting, Queue, Stack, dan Linked List.

---

# 📌 Pembagian Tugas Tim

Sebelum mulai mengerjakan, setiap anggota wajib menggunakan:

```cpp
#include "../include/pasien.h"
```

Tujuannya agar seluruh anggota menggunakan struct, variabel global, dan deklarasi fungsi yang sama.

---

## Yoga — CRUD, Struct, Array

**File:**

```text
crud.cpp
```

**Tanggung Jawab:**

- Menyimpan data pasien utama
- Menambah pasien
- Menampilkan pasien
- Mengedit pasien
- Menghapus pasien

**Function yang harus dibuat:**

```cpp
void tambahPasien();
void tampilPasien();
void editPasien();
void hapusPasien();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"

Pasien dataPasien[100];
int jumlahPasien = 0;

void tambahPasien() {

}

void tampilPasien() {

}

void editPasien() {

}

void hapusPasien() {

}
```

**Catatan:**

Variabel berikut hanya boleh dibuat satu kali.

```cpp
Pasien dataPasien[100];
int jumlahPasien = 0;
```

File lain hanya menggunakan:

```cpp
extern Pasien dataPasien[100];
extern int jumlahPasien;
```

---

## Alan — Searching

**File:**

```text
searching.cpp
```

**Tanggung Jawab:**

- Mencari pasien berdasarkan ID
- Mencari pasien berdasarkan nama

**Function yang harus dibuat:**

```cpp
int cariPasienById(string idPasien);
int cariPasienByNama(string nama);
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"

int cariPasienById(string idPasien) {

}

int cariPasienByNama(string nama) {

}
```

---

## Alvin — Queue

**File:**

```text
queue.cpp
```

**Tanggung Jawab:**

- Menambahkan pasien ke antrean
- Memanggil pasien dari antrean
- Menampilkan antrean

**Function yang harus dibuat:**

```cpp
void enqueuePasien();
void dequeuePasien();
void tampilAntrian();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"
#include <queue>

queue<Pasien> antrian;

void enqueuePasien() {

}

void dequeuePasien() {

}

void tampilAntrian() {

}
```

---

## Tasya — Sorting

**File:**

```text
sorting.cpp
```

**Tanggung Jawab:**

- Mengurutkan data pasien berdasarkan nama

**Function yang harus dibuat:**

```cpp
void sortingNama();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"

void sortingNama() {

}
```

---

## Tasya — Stack

**File:**

```text
stack.cpp
```

**Tanggung Jawab:**

- Menyimpan riwayat pasien yang telah dilayani

**Function yang harus dibuat:**

```cpp
void pushRiwayat(Pasien pasien);
void tampilRiwayat();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"
#include <stack>

stack<Pasien> riwayat;

void pushRiwayat(Pasien pasien) {

}

void tampilRiwayat() {

}
```

---

## Zaky — Linked List

**File:**

```text
linkedlist.cpp
```

**Tanggung Jawab:**

- Menyimpan data pasien dalam Linked List
- Menampilkan data Linked List
- Mengimplementasikan Pointer

**Function yang harus dibuat:**

```cpp
void tambahNodePasien(Pasien pasien);
void tampilLinkedList();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"

struct Node {
    Pasien data;
    Node* next;
};

Node* head = nullptr;

void tambahNodePasien(Pasien pasien) {

}

void tampilLinkedList() {

}
```

**Catatan:**

```cpp
Node* next;
```

digunakan sebagai implementasi Pointer untuk menghubungkan node pada Linked List.

---

## Zaky — Integrasi Sistem

**File:**

```text
main.cpp
```

**Tanggung Jawab:**

- Membuat menu utama
- Menghubungkan seluruh modul
- Mengintegrasikan program

**Function yang harus dibuat:**

```cpp
void menuUtama();
int main();
```

**Kerangka File:**

```cpp
#include "../include/pasien.h"

void menuUtama() {

}

int main() {

    menuUtama();
}
```

---
# 📌 Aturan Pengembangan

## Tidak Boleh

❌ Mengubah struct tanpa kesepakatan

❌ Mengubah nama atribut struct

❌ Mengubah nama fungsi yang telah disepakati

❌ Membuat variabel global pasien baru

❌ Menghapus kode anggota lain

❌ Mengedit file anggota lain tanpa izin

---

## Wajib

✅ Menggunakan `pasien.h`

✅ Menggunakan struct yang sama

✅ Menggunakan nama fungsi yang telah disepakati

✅ Melakukan testing sebelum merge

✅ Memberikan commit yang jelas

---

# 📌 Workflow GitHub

## 1. Ambil Perubahan Terbaru

Sebelum mulai bekerja, pastikan repository sudah versi terbaru.

```bash
git pull origin main
```

---

## 2. Masuk ke Branch Masing-Masing

Setiap anggota harus berpindah ke branch yang sesuai dengan tugasnya sebelum mulai bekerja.

Daftar branch:

```text
Yoga  → feature-crud
Alan  → feature-searching
Alvin → feature-queue
Tasya → feature-sorting-stack
Zaky  → feature-linkedlist-main
```

Contoh:

```bash
git checkout feature-crud
```

Jika branch belum muncul di komputer lokal:

```bash
git fetch
git checkout -b feature-crud origin/feature-crud
```

## 3. Simpan Perubahan

Setelah selesai mengerjakan fitur:

```bash
git add .
git commit -m "Menambahkan fitur CRUD"
```

Gunakan pesan commit yang jelas sesuai fitur yang dikerjakan.

---

## 4. Push ke GitHub

Push ke branch masing-masing.

Contoh:

```bash
git push origin feature-crud
```

---

## 5. Merge ke Branch Main

Setelah fitur selesai dan telah diuji, branch dapat digabungkan ke branch `main`.

---

## 6. Hindari Konflik

- Jangan mengubah file anggota lain tanpa izin.
- Jangan mengubah `pasien.h` tanpa persetujuan tim.
- Lakukan `git pull` sebelum mulai bekerja.
- Lakukan testing sebelum merge.

---

# 📌 Cara Masuk ke Branch Masing-Masing

Jika branch sudah dibuat, setiap anggota dapat berpindah ke branch yang sesuai dengan tugasnya.

Lihat daftar branch:

```bash
git branch -a
```

Masuk ke branch:

```bash
git checkout nama-branch
```

Contoh:

```bash
git checkout feature-crud
git checkout feature-searching
git checkout feature-queue
git checkout feature-sorting-stack
git checkout feature-linkedlist-main
```

Jika branch belum tersedia di komputer lokal:

```bash
git fetch
git checkout -b nama-branch origin/nama-branch
```

Cek branch yang sedang digunakan:

```bash
git branch
```

Branch aktif akan ditandai dengan simbol `*`.

# 📌 Sebelum Merge

Setiap anggota hanya mengerjakan file miliknya masing-masing.

```text
Yoga   → crud.cpp
Alan   → searching.cpp
Alvin  → queue.cpp
Tasya  → sorting.cpp, stack.cpp
Zaky   → linkedlist.cpp, main.cpp
```

Dengan cara ini kemungkinan konflik merge menjadi sangat kecil.

---

# 📌 Setelah Merge

```text
src/
│
├── crud.cpp
├── queue.cpp
├── stack.cpp
├── sorting.cpp
├── searching.cpp
├── linkedlist.cpp
└── main.cpp
```

Seluruh fungsi kemudian dipanggil dan diintegrasikan melalui:

```cpp
main.cpp
```

sebagai pusat jalannya program.

---

# 🎯 Tujuan Proyek

Mengimplementasikan konsep:

- Struct
- Array
- Pointer
- Searching
- Sorting
- Queue
- Stack
- Linked List

ke dalam Sistem Manajemen Klinik Gigi dengan pembagian tugas yang jelas, kode yang terstruktur, dan proses integrasi yang minim konflik.
