/*
  Menggunakan perror() dan errno // informasi kesalahan (errno/perror)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <errno.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    FILE *fp = fopen("tidak_ada_file.txt", "r"); // deklarasi fungsi (prototipe)
    if (fp == NULL) // percabangan if (kondisi)
    { // awal blok kode
        int e = errno; // deklarasi/penugasan variabel
        fprintf(stderr, "Gagal membuka: %s\n", strerror(e)); // deklarasi fungsi (prototipe)
        perror("perror info"); // informasi kesalahan (errno/perror)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    fclose(fp); // tutup file
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
