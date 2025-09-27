/*
  Operator bitwise: &, |, ^, ~, <<, >> // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    unsigned int a = 0b0101; // penugasan nilai ke variabel
    unsigned int b = 0b0011; // penugasan nilai ke variabel

    unsigned int andv = a & b; // penugasan nilai ke variabel
    unsigned int orv  = a | b; // penugasan nilai ke variabel
    unsigned int xorv = a ^ b; // penugasan nilai ke variabel
    unsigned int notv = ~a; // penugasan nilai ke variabel
    unsigned int shl  = a << 1; // penugasan nilai ke variabel
    unsigned int shr  = a >> 1; // penugasan nilai ke variabel

    printf("and=%u or=%u xor=%u not=%u shl=%u shr=%u\n", // cetak teks/variabel ke layar
           andv, orv, xorv, notv, shl, shr); // langkah kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
