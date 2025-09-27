/*
  math.h: sqrt, pow, fabs, floor/ceil // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <math.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    double x = 9.0; // deklarasi/penugasan variabel
    double root = sqrt(x); // deklarasi fungsi (prototipe)
    double p = pow(2.0, 3.0); // deklarasi fungsi (prototipe)
    double a = fabs(-3.5); // deklarasi fungsi (prototipe)
    double f = floor(2.9); // deklarasi fungsi (prototipe)
    double c = ceil(2.1); // deklarasi fungsi (prototipe)

    printf("sqrt(9)=%.1f pow(2,3)=%.1f fabs(-3.5)=%.1f floor(2.9)=%.1f ceil(2.1)=%.1f\n", // cetak teks/variabel ke layar
           root, p, a, f, c); // langkah kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
