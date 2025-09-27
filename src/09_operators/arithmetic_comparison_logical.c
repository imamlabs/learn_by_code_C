/*
  Operator aritmatika, perbandingan, logika // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdbool.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int a = 7; // deklarasi/penugasan variabel
    int b = 3; // deklarasi/penugasan variabel
    int add = a + b; // deklarasi/penugasan variabel
    int mod = a % b; // deklarasi/penugasan variabel
    bool eq  = (a == b); // deklarasi/penugasan variabel
    bool and = (a > 5) && (b < 5); // deklarasi/penugasan variabel
    printf("add=%d mod=%d eq=%d and=%d\n", add, mod, eq, and); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
