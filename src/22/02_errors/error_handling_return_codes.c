/*
  Error handling via kode kembali fungsi // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdbool.h> // sertakan header (library) yang dibutuhkan

bool divide(int a, int b, int *out) // langkah kode
{ // awal blok kode
    if (b == 0) // percabangan if (kondisi)
    { // awal blok kode
        return false; // kembalikan nilai dari fungsi
    } // akhir blok kode
    *out = a / b; // penugasan nilai ke variabel
    return true; // kembalikan nilai dari fungsi
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    int result = 0; // deklarasi/penugasan variabel
    if (!divide(10, 0, &result)) // percabangan if (kondisi)
    { // awal blok kode
        printf("Pembagi nol!\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    if (divide(10, 2, &result)) // percabangan if (kondisi)
    { // awal blok kode
        printf("10 / 2 = %d\n", result); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
