/*
  Array of struct dan loop cetak // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan
struct City { char name[16]; int pop; }; // langkah kode
int main(void) // langkah kode
{ // awal blok kode
    struct City cs[3]; // langkah kode
    strcpy(cs[0].name, "A"); // operasi string (string.h)
    cs[0].pop = 1000; // penugasan nilai ke variabel
    strcpy(cs[1].name, "B"); // operasi string (string.h)
    cs[1].pop = 750; // penugasan nilai ke variabel
    strcpy(cs[2].name, "C"); // operasi string (string.h)
    cs[2].pop = 1200; // penugasan nilai ke variabel
    for (int i = 0; i < 3; i = i + 1) // perulangan for
    { // awal blok kode
        printf("%s: %d\n", cs[i].name, cs[i].pop); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
