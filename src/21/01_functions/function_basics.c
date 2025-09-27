/*
  Fungsi dasar: deklarasi, definisi, pemanggilan // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

void say_hello(void);  /* Deklarasi (prototipe) */ // deklarasi fungsi (prototipe)

int main(void) // langkah kode
{ // awal blok kode
    say_hello(); // langkah kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode

void say_hello(void)   /* Definisi fungsi */ // langkah kode
{ // awal blok kode
    printf("Hello dari fungsi!\n"); // cetak teks/variabel ke layar
} // akhir blok kode
