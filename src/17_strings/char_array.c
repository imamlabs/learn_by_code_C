/*
  String sebagai char array // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    char name[] = "Imam"; // deklarasi/penugasan variabel
    printf("Nama: %s\n", name); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
