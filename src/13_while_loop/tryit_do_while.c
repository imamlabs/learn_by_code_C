/*
  Perulangan do-while minimal // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int i = 0; // deklarasi/penugasan variabel
    do // mulai blok do-while
    { // awal blok kode
        printf("i=%d\n", i); // cetak teks/variabel ke layar
        i = i + 1; // penugasan nilai ke variabel
    } // akhir blok kode
    while (i < 3); // perulangan while
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
