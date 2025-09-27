/*
  Cakupan variabel: global, lokal, static lokal // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int g = 0;  /* Variabel global */ // penugasan nilai ke variabel

void bump(void) // langkah kode
{ // awal blok kode
    static int counter = 0;  /* Menyimpan nilai antar pemanggilan */ // penugasan nilai ke variabel
    counter = counter + 1; // penugasan nilai ke variabel
    g = g + 1; // penugasan nilai ke variabel
    printf("counter=%d g=%d\n", counter, g); // cetak teks/variabel ke layar
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    bump(); // langkah kode
    bump(); // langkah kode
    bump(); // langkah kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
