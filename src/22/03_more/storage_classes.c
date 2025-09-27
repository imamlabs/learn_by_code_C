/*
  Storage classes: auto, static, extern // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int g = 1; // deklarasi/penugasan variabel

void bump(void) // langkah kode
{ // awal blok kode
    static int s = 0; // penugasan nilai ke variabel
    s = s + 1; // penugasan nilai ke variabel
    g = g + 1; // penugasan nilai ke variabel
    printf("static_s=%d g=%d\n", s, g); // cetak teks/variabel ke layar
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    bump(); // langkah kode
    bump(); // langkah kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
