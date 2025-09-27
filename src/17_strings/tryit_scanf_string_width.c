/*
  Membaca string aman dengan lebar di scanf // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    char name[16]; // deklarasi/penugasan variabel
    printf("Masukkan nama (maks 15 char): "); // deklarasi fungsi (prototipe)
    if (scanf("%15s", name) == 1) // percabangan if (kondisi)
    { // awal blok kode
        printf("Halo, %s\n", name); // cetak teks/variabel ke layar
    } // akhir blok kode
    else // cabang else (kondisi selainnya)
    { // awal blok kode
        printf("Input tidak valid\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
