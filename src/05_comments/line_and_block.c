/*
  Komentar satu baris & blok // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    // Komentar satu baris
    printf("Komentar satu baris di atas\n"); // cetak teks/variabel ke layar
    /* Komentar
       banyak baris */ // langkah kode
    printf("Komentar blok di atas\n"); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
