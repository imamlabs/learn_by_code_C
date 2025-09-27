/*
  Parameter & nilai kembali // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int add(int a, int b);  /* Prototipe */ // deklarasi fungsi (prototipe)

int main(void) // langkah kode
{ // awal blok kode
    int s = add(2, 3); // deklarasi fungsi (prototipe)
    printf("2 + 3 = %d\n", s); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode

int add(int a, int b) // langkah kode
{ // awal blok kode
    int result = a + b; // deklarasi/penugasan variabel
    return result; // kembalikan nilai dari fungsi
} // akhir blok kode
