/*
  Ukuran tipe data // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    printf("sizeof(char)=%zu\n", sizeof(char)); // deklarasi fungsi (prototipe)
    printf("sizeof(int)=%zu\n", sizeof(int)); // deklarasi fungsi (prototipe)
    printf("sizeof(long)=%zu\n", sizeof(long)); // deklarasi fungsi (prototipe)
    printf("sizeof(float)=%zu\n", sizeof(float)); // deklarasi fungsi (prototipe)
    printf("sizeof(double)=%zu\n", sizeof(double)); // deklarasi fungsi (prototipe)
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
