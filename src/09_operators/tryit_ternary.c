/*
  Operator ternary (kondisi ? benar : salah) // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int x = 7; // deklarasi/penugasan variabel
    const char *t = (x % 2 == 0) ? "genap" : "ganjil"; // penugasan nilai ke variabel
    printf("x=%d adalah %s\n", x, t); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
