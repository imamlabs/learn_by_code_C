/*
  Perbedaan deklarasi (prototype) vs definisi // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

/* Deklarasi di atas main agar boleh dipanggil sebelum didefinisikan */
int square(int x); // deklarasi fungsi (prototipe)

int main(void) // langkah kode
{ // awal blok kode
    int r = square(5); // deklarasi fungsi (prototipe)
    printf("square(5)=%d\n", r); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode

int square(int x)   /* Definisi di bawah */ // langkah kode
{ // awal blok kode
    return x * x; // kembalikan nilai dari fungsi
} // akhir blok kode
