/*
  Menukar dua variabel dengan pointer // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
void swap(int *a, int *b) // langkah kode
{ // awal blok kode
    int t = *a; // deklarasi/penugasan variabel
    *a = *b; // penugasan nilai ke variabel
    *b = t; // penugasan nilai ke variabel
} // akhir blok kode
int main(void) // langkah kode
{ // awal blok kode
    int x = 3; // deklarasi/penugasan variabel
    int y = 8; // deklarasi/penugasan variabel
    swap(&x, &y); // langkah kode
    printf("x=%d y=%d\n", x, y); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
