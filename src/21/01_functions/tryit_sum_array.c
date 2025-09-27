/*
  Menjumlahkan elemen array via fungsi // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int sum(const int *a, int n) // langkah kode
{ // awal blok kode
    int s = 0; // deklarasi/penugasan variabel
    for (int i = 0; i < n; i = i + 1) // perulangan for
    { // awal blok kode
        s = s + a[i]; // penugasan nilai ke variabel
    } // akhir blok kode
    return s; // kembalikan nilai dari fungsi
} // akhir blok kode
int main(void) // langkah kode
{ // awal blok kode
    int data[5] = { 1, 2, 3, 4, 5 }; // deklarasi/penugasan variabel
    int s = sum(data, 5); // deklarasi fungsi (prototipe)
    printf("sum=%d\n", s); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
