#include "../include/pasien.h"

struct Node {
    Pasien data;
    Node* next;
};

Node* head = nullptr;

void tambahNodePasien(Pasien pasien) {
    Node* nodeBaru = new Node();
    nodeBaru->data = pasien;
    nodeBaru->next = nullptr;
    
    if (head == nullptr) {
        head = nodeBaru;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = nodeBaru;
    }
}

void tampilLinkedList() {
    if (head == nullptr) {
        cout << "\n[Info] Belum ada pasien yang masuk rekam medis tetap.\n";
        return;
    }
    
    Node* temp = head;
    cout << "\n=== Data Pasien Selesai ===\n";
    while (temp != nullptr) {
        cout << "[ID: " << temp->data.idPasien << " -> Nama: " << temp->data.nama << "] -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}