/*
  Pointer dasar // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int x = 10; // deklarasi/penugasan variabel
    int *px = &x; // deklarasi/penugasan variabel
    printf("x=%d\n", x); // cetak teks/variabel ke layar
    printf("*px=%d\n", *px); // cetak teks/variabel ke layar
    *px = 99; // penugasan nilai ke variabel
    printf("x setelah via pointer=%d\n", x); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
