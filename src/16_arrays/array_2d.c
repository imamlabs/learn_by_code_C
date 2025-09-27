/*
  Array 2D // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int m[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }; // deklarasi/penugasan variabel
    for (int r = 0; r < 2; r = r + 1) // perulangan for
    { // awal blok kode
        for (int c = 0; c < 3; c = c + 1) // perulangan for
        { // awal blok kode
            printf("%d ", m[r][c]); // cetak teks/variabel ke layar
        } // akhir blok kode
        printf("\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
