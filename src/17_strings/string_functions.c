/*
  Fungsi string.h // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    char a[20] = "C"; // deklarasi/penugasan variabel
    char b[20] = "Language"; // deklarasi/penugasan variabel
    size_t len = strlen(a); // deklarasi fungsi (prototipe)
    strcpy(a, "Hello"); // operasi string (string.h)
    strcat(a, " C"); // operasi string (string.h)
    int cmp = strcmp(a, b); // deklarasi fungsi (prototipe)
    printf("len=%zu a='%s' cmp_vs_b=%d\n", len, a, cmp); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
