/*
  While loop // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int i = 0; // deklarasi/penugasan variabel
    while (i < 3) // perulangan while
    { // awal blok kode
        printf("i=%d\n", i); // cetak teks/variabel ke layar
        i = i + 1; // penugasan nilai ke variabel
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
