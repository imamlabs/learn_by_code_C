/*
  typedef: alias nama tipe // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

typedef struct // langkah kode
{ // awal blok kode
    int x; // deklarasi/penugasan variabel
    int y; // deklarasi/penugasan variabel
} Point; // langkah kode

int main(void) // langkah kode
{ // awal blok kode
    Point p = { 1, 2 }; // penugasan nilai ke variabel
    printf("Point=(%d,%d)\n", p.x, p.y); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
