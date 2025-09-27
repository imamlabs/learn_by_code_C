/*
  Pointer dan array // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int a[3] = { 1, 2, 3 }; // deklarasi/penugasan variabel
    int *p = a; // deklarasi/penugasan variabel
    printf("p[0]=%d p[1]=%d p[2]=%d\n", p[0], p[1], p[2]); // cetak teks/variabel ke layar
    printf("*(p+1)=%d\n", *(p + 1)); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
