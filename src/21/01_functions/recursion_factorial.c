/*
  Rekursi: faktorial n! // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

unsigned long long fact(unsigned int n) // langkah kode
{ // awal blok kode
    if (n == 0) // percabangan if (kondisi)
    { // awal blok kode
        return 1ULL; // kembalikan nilai dari fungsi
    } // akhir blok kode
    return n * fact(n - 1); // deklarasi fungsi (prototipe)
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    unsigned int n = 5; // penugasan nilai ke variabel
    printf("%u! = %llu\n", n, fact(n)); // deklarasi fungsi (prototipe)
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
