/*
  calloc() menginisialisasi nol // alokasi memori dinamis terinisialisasi nol (calloc)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    size_t n = 4; // deklarasi/penugasan variabel
    int *arr = (int*)calloc(n, sizeof *arr); // deklarasi/penugasan variabel
    if (arr == NULL) // percabangan if (kondisi)
    { // awal blok kode
        perror("calloc gagal"); // alokasi memori dinamis terinisialisasi nol (calloc)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode

    for (size_t i = 0; i < n; i = i + 1) // perulangan for
    { // awal blok kode
        printf("arr[%zu]=%d\n", i, arr[i]); // cetak teks/variabel ke layar
    } // akhir blok kode

    free(arr); // bebaskan memori yang dialokasikan
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
