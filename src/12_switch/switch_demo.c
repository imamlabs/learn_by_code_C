/*
  switch-case // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int day = 3; // deklarasi/penugasan variabel
    switch (day) // percabangan switch
    { // awal blok kode
        case 1: printf("Senin\n"); break; // deklarasi fungsi (prototipe)
        case 2: printf("Selasa\n"); break; // deklarasi fungsi (prototipe)
        case 3: printf("Rabu\n"); break; // deklarasi fungsi (prototipe)
        default: printf("Hari lain\n"); break; // deklarasi fungsi (prototipe)
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
