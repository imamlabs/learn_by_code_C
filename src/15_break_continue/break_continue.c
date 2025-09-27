/*
  break & continue // hentikan loop/switch saat ini
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    for (int i = 0; i < 5; i = i + 1) // perulangan for
    { // awal blok kode
        if (i == 2) { continue; } // percabangan if (kondisi)
        if (i == 4) { break; } // percabangan if (kondisi)
        printf("i=%d\n", i); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
