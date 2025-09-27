/*
  Beberapa assignment bertahap + cetak nilai // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int a; // deklarasi/penugasan variabel
    a = 1; // penugasan nilai ke variabel
    a = a + 2; // penugasan nilai ke variabel
    a = a * 3; // penugasan nilai ke variabel
    printf("a=%d\n", a); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
