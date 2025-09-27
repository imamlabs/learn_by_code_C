/*
  Cari nilai maksimum pada array // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int a[5] = { 5, 9, 3, 7, 2 }; // deklarasi/penugasan variabel
    int max = a[0]; // deklarasi/penugasan variabel
    for (int i = 1; i < 5; i = i + 1) // perulangan for
    { // awal blok kode
        if (a[i] > max) // percabangan if (kondisi)
        { // awal blok kode
            max = a[i]; // penugasan nilai ke variabel
        } // akhir blok kode
    } // akhir blok kode
    printf("max=%d\n", max); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
