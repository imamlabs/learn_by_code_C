/*
  Membaca file teks baris demi baris // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    FILE *fp = fopen("sample_create.txt", "r"); // deklarasi fungsi (prototipe)
    if (fp == NULL) // percabangan if (kondisi)
    { // awal blok kode
        perror("gagal membuka file"); // informasi kesalahan (errno/perror)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode

    char buf[128]; // deklarasi/penugasan variabel
    while (fgets(buf, sizeof buf, fp) != NULL) // perulangan while
    { // awal blok kode
        printf("Baris: %s", buf); // cetak teks/variabel ke layar
    } // akhir blok kode
    fclose(fp); // tutup file
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
