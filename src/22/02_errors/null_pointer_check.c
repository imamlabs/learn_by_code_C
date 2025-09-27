/*
  Cek NULL sebelum dipakai // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <stdlib.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    int *p = NULL; // deklarasi/penugasan variabel
    if (p == NULL) // percabangan if (kondisi)
    { // awal blok kode
        printf("Pointer p masih NULL\n"); // cetak teks/variabel ke layar
        p = (int*)malloc(sizeof *p); // penugasan nilai ke variabel
        if (p == NULL) // percabangan if (kondisi)
        { // awal blok kode
            perror("malloc gagal"); // alokasi memori dinamis (malloc)
            return 1; // kembalikan nilai dari fungsi
        } // akhir blok kode
        *p = 42; // penugasan nilai ke variabel
    } // akhir blok kode
    printf("*p=%d\n", *p); // cetak teks/variabel ke layar
    free(p); // bebaskan memori yang dialokasikan
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
