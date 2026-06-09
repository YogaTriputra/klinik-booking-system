# 🏥 Smart Clinic Booking & Rekam Medis System

Aplikasi manajemen booking layanan kesehatan dan rekam medis klinik berbasis C++ yang dibangun secara modular. [cite_start]Proyek ini dibuat untuk memenuhi tugas Final Project mata kuliah Struktur Data[cite: 1063, 1081].

## 👥 Anggota Kelompok & Pembagian Tugas
* [cite_start]**Anggota 1: Yoga Setia Triputra (25.11.6394)** - Penanggung Jawab CRUD, Struct, Array, dan Penulisan Laporan[cite: 424, 431, 488].
* [cite_start]**Anggota 2: Alvin Nur Rohman (25.11.6362)** - Penanggung Jawab Queue, Evaluasi & Analisis, dan Penulisan Laporan[cite: 574, 1226].
* [cite_start]**Anggota 3: Tarsisia Theodora Milly (25.11.6381)** - Penanggung Jawab Stack, Sorting, dan Penulisan Laporan[cite: 86, 177].
* [cite_start]**Anggota 4: Bernardus Mariotanalan Wiharyanto (25.11.6352)** - Penanggung Jawab Searching, Quality Control (Pengecekan Fungsional Sistem)[cite: 174, 177].
* [cite_start]**Anggota 5: Muhammad Zakiyuddin Ramadan (25.11.6386)** - Penanggung Jawab Linked List, Integrasi Sistem, dan Penulisan Laporan[cite: 91, 1063, 1081].

---

## 🛠️ Penerapan Struktur Data Sesuai Inti Materi
[cite_start]Aplikasi ini menggunakan penyimpanan berbasis memori statis dan dinamis secara hibrida, serta menerapkan minimal 3 struktur data berbeda tanpa dependensi STL bawaan[cite: 33, 48]:

1. [cite_start]**Array & Struct (Statis):** Digunakan oleh **Anggota 1** untuk mengelola data master paket layanan medis dan jadwal dokter aktif[cite: 19, 424, 431].
2. **Database File Teks (`.txt` via fstream):** Digunakan oleh **Anggota 2** untuk menyimpan data pasien secara permanen dari RAM ke harddisk saat aplikasi ditutup, serta memuatnya kembali (*auto-load*) saat aplikasi dinyalakan.
3. **Queue (Mekanisme Antrean):** Diimplementasikan secara manual oleh **Anggota 2** menggunakan prinsip FIFO (*First In First Out*) untuk mengelola pemanggilan antrean pasien dari ruang tunggu menuju kamar periksa dokter.
4. [cite_start]**Stack (Mekanisme Fitur Undo):** Diimplementasikan secara manual oleh **Anggota 3** menggunakan prinsip LIFO (*Last In First Out*) untuk mengakomodasi pembatalan transaksi kasir atau *booking* terakhir yang keliru[cite: 86].
5. [cite_start]**Sorting & Searching:** Diimplementasikan oleh **Anggota 3 & 4** untuk mengurutkan antrean klinik berdasarkan urgensi/jam kedatangan (*Sorting*) [cite: 177, 279][cite_start], serta mencari nomor rekam medis pasien secara sekuensial (*Searching*)[cite: 174, 177, 676].
6. [cite_start]**Singly Linked List Non-Circular (Dinamis):** Diimplementasikan oleh **Anggota 5** menggunakan alokasi memori dinamis (`new TNode`) khusus untuk menampung riwayat rekam medis pasien yang fleksibel dan efisien memori[cite: 34, 36, 434, 437].

---

## 💻 Struktur Folder Proyek (Modular)
```text
📂 klinik-booking-system/
│
├── 📂 src/                      --> File kode sumber C++ (.cpp)
│   ├── main.cpp                 --> Menu Utama & Alur Sistem Terintegrasi
│   ├── anggota1_crud.cpp        --> Modul CRUD Data Dokter & Layanan (Array)
│   ├── anggota2_file.cpp        --> Modul Antrean Pasien (Queue) & File Handling
│   ├── anggota3_stack.cpp       --> Modul Fitur Undo Transaksi (Stack) & Sorting
│   └── anggota4_search.cpp      --> Modul Pencarian Rekam Medis (Searching)
│
├── 📂 data/                     --> Database lokal berbasis file teks
│   ├── data_master.txt          --> Basis data dokter dan paket layanan
│   └── riwayat_booking.txt      --> Basis data antrean dan rekam medis pasien
│
└── README.md                    --> Dokumentasi Utama Proyek
