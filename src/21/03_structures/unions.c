/*
  Union: beberapa interpretasi data pada memori yang sama // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan

union Number // langkah kode
{ // awal blok kode
    int i; // deklarasi/penugasan variabel
    float f; // deklarasi/penugasan variabel
}; // langkah kode

int main(void) // langkah kode
{ // awal blok kode
    union Number n; // langkah kode
    n.i = 0x3f800000;   /* representasi bit 1.0f pada IEEE-754 */ // penugasan nilai ke variabel
    printf("Sebagai int = %d\n", n.i); // cetak teks/variabel ke layar
    printf("Sebagai float = %f\n", n.f); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
