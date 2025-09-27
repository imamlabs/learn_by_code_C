/*
  If, else if, else // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int x = 10; // deklarasi/penugasan variabel
    if (x > 10) // percabangan if (kondisi)
    { // awal blok kode
        printf("lebih dari 10\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    else if (x == 10) // cabang else (kondisi selainnya)
    { // awal blok kode
        printf("sama dengan 10\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    else // cabang else (kondisi selainnya)
    { // awal blok kode
        printf("kurang dari 10\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
