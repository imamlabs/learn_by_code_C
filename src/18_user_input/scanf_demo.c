/*
  Input dengan scanf // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int age; // deklarasi/penugasan variabel
    double height; // deklarasi/penugasan variabel
    printf("Masukkan umur dan tinggi (mis: 20 170.5): "); // deklarasi fungsi (prototipe)
    if (scanf("%d %lf", &age, &height) == 2) // percabangan if (kondisi)
    { // awal blok kode
        printf("Umur=%d Tinggi=%.1f\n", age, height); // cetak teks/variabel ke layar
    } // akhir blok kode
    else // cabang else (kondisi selainnya)
    { // awal blok kode
        printf("Input tidak valid\n"); // cetak teks/variabel ke layar
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
