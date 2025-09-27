/*
  #define makro & macro function-like // makro preprosesor (#define)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

#define PI 3.14159 // makro preprosesor (#define)
#define SQUARE(x) ((x) * (x)) // makro preprosesor (#define)

int main(void) // langkah kode
{ // awal blok kode
    double r = 2.0; // deklarasi/penugasan variabel
    double area = PI * SQUARE(r); // deklarasi fungsi (prototipe)
    printf("Luas lingkaran radius 2 = %.2f\n", area); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
