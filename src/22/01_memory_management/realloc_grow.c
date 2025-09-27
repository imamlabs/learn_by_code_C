/*
  realloc() untuk memperbesar blok // ubah ukuran blok memori (realloc)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    size_t n = 3; // deklarasi/penugasan variabel
    int *arr = (int*)malloc(n * sizeof *arr); // deklarasi/penugasan variabel
    if (arr == NULL) // percabangan if (kondisi)
    { // awal blok kode
        perror("malloc gagal"); // alokasi memori dinamis (malloc)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    for (size_t i = 0; i < n; i = i + 1) // perulangan for
    { // awal blok kode
        arr[i] = (int)i; // penugasan nilai ke variabel
    } // akhir blok kode

    size_t m = 6; // deklarasi/penugasan variabel
    int *tmp = (int*)realloc(arr, m * sizeof *arr); // deklarasi/penugasan variabel
    if (tmp == NULL) // percabangan if (kondisi)
    { // awal blok kode
        free(arr); // bebaskan memori yang dialokasikan
        perror("realloc gagal"); // ubah ukuran blok memori (realloc)
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    arr = tmp; // penugasan nilai ke variabel

    for (size_t i = n; i < m; i = i + 1) // perulangan for
    { // awal blok kode
        arr[i] = (int)(i * 2); // penugasan nilai ke variabel
    } // akhir blok kode

    for (size_t i = 0; i < m; i = i + 1) // perulangan for
    { // awal blok kode
        printf("arr[%zu]=%d\n", i, arr[i]); // cetak teks/variabel ke layar
    } // akhir blok kode

    free(arr); // bebaskan memori yang dialokasikan
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
