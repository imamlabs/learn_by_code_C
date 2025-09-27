/*
  Alokasi matriks 2D sederhana dengan calloc // alokasi memori dinamis terinisialisasi nol (calloc)
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int rows = 2; // deklarasi/penugasan variabel
    int cols = 3; // deklarasi/penugasan variabel
    int **m = (int**)calloc(rows, sizeof *m); // deklarasi/penugasan variabel
    if (!m) { return 1; } // percabangan if (kondisi)
    for (int r = 0; r < rows; r = r + 1) // perulangan for
    { // awal blok kode
        m[r] = (int*)calloc(cols, sizeof *m[r]); // penugasan nilai ke variabel
        if (!m[r]) { return 1; } // percabangan if (kondisi)
    } // akhir blok kode
    m[0][1] = 7; // penugasan nilai ke variabel
    m[1][2] = 9; // penugasan nilai ke variabel
    for (int r = 0; r < rows; r = r + 1) // perulangan for
    { // awal blok kode
        for (int c = 0; c < cols; c = c + 1) // perulangan for
        { // awal blok kode
            printf("%d ", m[r][c]); // cetak teks/variabel ke layar
        } // akhir blok kode
        printf("\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    for (int r = 0; r < rows; r = r + 1) // perulangan for
    { // awal blok kode
        free(m[r]); // bebaskan memori yang dialokasikan
    } // akhir blok kode
    free(m); // bebaskan memori yang dialokasikan
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
