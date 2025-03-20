#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#include "boolean.h"

// Deklarasi fungsi
void masukStack(LinkedList* list, int nilai);
void keluarStack(LinkedList* list);
void tampilkanStack(LinkedList* list);

boolean isEmpty(LinkedList list) {
    return (list.kepala == NULL) ? true : false;
}

void desimalKeBiner(LinkedList* stack, int nilai) {
    // Jika input adalah 0, langsung print 0
    if (nilai == 0) {
        printf("Bilangan biner: 0\n");
        return;
    }
    
    printf("\nProses Konversi:\n");
    printf("----------------\n");
    
    // Proses konversi
    while (nilai > 0) {
        printf("Push %d ke stack: ", nilai % 2);
        masukStack(stack, nilai % 2);  // Menggunakan masukStack
        tampilkanStack(stack);
        printf("\n");
        nilai = nilai / 2;
    }
    
    // Print hasil
    printf("\nHasil Konversi:\n");
    printf("---------------\n");
    printf("Bilangan biner: ");
    tampilkanStack(stack);  // Menggunakan tampilkanStack
    printf("\n");
    
    printf("\nProses Pop Stack:\n");
    printf("----------------\n");
    // Hapus elemen stack satu per satu
    while (!isEmpty(*stack)) {
        printf("Pop stack: ");
        tampilkanStack(stack);
        printf(" -> ");
        keluarStack(stack);
        tampilkanStack(stack);
        printf("\n");
    }
}

// Fungsi untuk memasukkan elemen ke stack
void masukStack(LinkedList* list, int nilai) {
    sisipAwal(list, nilai);
}

// Fungsi untuk mengeluarkan elemen dari stack
void keluarStack(LinkedList* list) {
    hapusAkhir(list);
}

// Fungsi untuk menampilkan isi stack
void tampilkanStack(LinkedList* list) {
    tampilkanDaftar(list);
}
