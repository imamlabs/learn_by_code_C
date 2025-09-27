/*
  Membuat file teks baru dengan fopen("w") // buka file
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    FILE *fp = fopen("sample_create.txt", "w"); // deklarasi fungsi (prototipe)
    if (fp == NULL) // percabangan if (kondisi)
    { // awal blok kode
        perror("gagal membuka file"); // informasi kesalahan (errno/perror)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    fprintf(fp, "Baris pertama\n"); // tulis keluaran terformat
    fprintf(fp, "Baris kedua\n"); // tulis keluaran terformat
    fclose(fp); // tutup file
    printf("File sample_create.txt dibuat.\n"); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
