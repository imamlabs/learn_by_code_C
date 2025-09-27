/*
  Menjumlahkan 1..n dengan for // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int n = 5; // deklarasi/penugasan variabel
    int sum = 0; // deklarasi/penugasan variabel
    for (int i = 1; i <= n; i = i + 1) // perulangan for
    { // awal blok kode
        sum = sum + i; // penugasan nilai ke variabel
    } // akhir blok kode
    printf("sum=%d\n", sum); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
