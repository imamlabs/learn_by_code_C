/*
  Array 1D // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int nums[3] = { 10, 20, 30 }; // deklarasi/penugasan variabel
    for (int i = 0; i < 3; i = i + 1) // perulangan for
    { // awal blok kode
        printf("nums[%d]=%d\n", i, nums[i]); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
