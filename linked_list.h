#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

// Definisi struct untuk simpul
typedef struct Simpul {
    int data;
    struct Simpul* berikutnya;
} Simpul;

// Definisi struct untuk LinkedList
typedef struct {
    Simpul* kepala;
} LinkedList;

// Deklarasi fungsi (gunakan `extern` jika dipakai di lebih dari satu file)
void inisialisasiDaftar(LinkedList* daftar);
Simpul* buatSimpul(int nilai);
void sisipAwal(LinkedList* daftar, int nilai);
void sisipAkhir(LinkedList* daftar, int nilai);
void sisipSetelah(LinkedList* daftar, int setelahNilai, int nilai);
void hapusAwal(LinkedList* daftar);
void hapusAkhir(LinkedList* daftar);
void hapusNilai(LinkedList* daftar, int nilai);
void hapusSemua(LinkedList* daftar);
void tampilkanDaftar(LinkedList* daftar);

#endif
