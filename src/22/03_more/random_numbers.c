/*
  Bilangan acak: srand() + rand() // bilangan acak (rand/srand)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan
#include <time.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    srand((unsigned)time(NULL)); // waktu & tanggal (time.h)
    for (int i = 0; i < 5; i = i + 1) // perulangan for
    { // awal blok kode
        int r = rand() % 6; // deklarasi/penugasan variabel
        printf("dadu=%d\n", r + 1); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
