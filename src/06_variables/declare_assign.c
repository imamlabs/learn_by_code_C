/*
  Deklarasi & penugasan // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int x; // deklarasi/penugasan variabel
    x = 10; // penugasan nilai ke variabel
    int y = 20; // deklarasi/penugasan variabel
    int a = 1, b = 2, c = 3; // deklarasi/penugasan variabel
    printf("x=%d y=%d a=%d b=%d c=%d\n", x, y, a, b, c); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
