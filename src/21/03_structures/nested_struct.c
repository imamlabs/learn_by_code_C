/*
  Struct bersarang (nested structs) // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan

struct Date { int y; int m; int d; }; // langkah kode

struct Employee // langkah kode
{ // awal blok kode
    char name[32]; // deklarasi/penugasan variabel
    struct Date hired; // langkah kode
}; // langkah kode

int main(void) // langkah kode
{ // awal blok kode
    struct Employee e; // langkah kode
    strcpy(e.name, "Budi"); // operasi string (string.h)
    e.hired.y = 2024; // penugasan nilai ke variabel
    e.hired.m = 7; // penugasan nilai ke variabel
    e.hired.d = 1; // penugasan nilai ke variabel

    printf("Nama=%s Hired=%04d-%02d-%02d\n", // cetak teks/variabel ke layar
           e.name, e.hired.y, e.hired.m, e.hired.d); // akses field struct via objek
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
