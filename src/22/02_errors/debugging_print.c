/*
  Debugging sederhana dengan printf // tulis keluaran terformat

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int add(int a, int b) // langkah kode
{ // awal blok kode
    int s = a + b; // deklarasi/penugasan variabel
    printf("[debug] a=%d b=%d s=%d\n", a, b, s); // cetak teks/variabel ke layar
    return s; // kembalikan nilai dari fungsi
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    int r = add(2, 3); // deklarasi fungsi (prototipe)
    printf("hasil=%d\n", r); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
