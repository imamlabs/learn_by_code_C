/*
  Menambahkan (append) ke file yang sudah ada // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    FILE *fp = fopen("sample_create.txt", "a"); // deklarasi fungsi (prototipe)
    if (fp == NULL) // percabangan if (kondisi)
    { // awal blok kode
        perror("gagal membuka file"); // informasi kesalahan (errno/perror)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    fprintf(fp, "Baris ketiga (append)\n"); // deklarasi fungsi (prototipe)
    fclose(fp); // tutup file
    printf("Append selesai.\n"); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
