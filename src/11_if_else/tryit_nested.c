/*
  If bersarang untuk rentang nilai // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int n = 75; // deklarasi/penugasan variabel
    if (n >= 80) // percabangan if (kondisi)
    { // awal blok kode
        printf("A\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    else // cabang else (kondisi selainnya)
    { // awal blok kode
        if (n >= 70) // percabangan if (kondisi)
        { // awal blok kode
            printf("B\n"); // cetak teks/variabel ke layar
        } // akhir blok kode
        else // cabang else (kondisi selainnya)
        { // awal blok kode
            printf("C atau di bawahnya\n"); // cetak teks/variabel ke layar
        } // akhir blok kode
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
