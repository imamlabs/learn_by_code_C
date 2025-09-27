/*
  Validasi input string → int dengan strtol // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan
#include <errno.h> // sertakan header (library) yang dibutuhkan
#include <limits.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    const char *s = "123x"; // penugasan nilai ke variabel
    char *end = NULL; // deklarasi/penugasan variabel
    errno = 0; // penugasan nilai ke variabel
    long v = strtol(s, &end, 10); // deklarasi fungsi (prototipe)
    if (errno != 0 || end == s || *end != '\0' || v > INT_MAX || v < INT_MIN) // percabangan if (kondisi)
    { // awal blok kode
        printf("Input tidak valid: '%s'\n", s); // cetak teks/variabel ke layar
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    printf("Nilai: %ld\n", v); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
