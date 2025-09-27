/*
  Gunakan header & file .c terpisah // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include "lib.h" // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    int r = add(2, 3); // deklarasi fungsi (prototipe)
    printf("2 + 3 = %d\n", r); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
