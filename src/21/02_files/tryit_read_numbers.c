/*
  Membaca angka dari file dengan fscanf // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    FILE *fp = fopen("numbers.txt", "w"); // deklarasi fungsi (prototipe)
    if (!fp) { return 1; } // percabangan if (kondisi)
    fprintf(fp, "10 20 30\n"); // tulis keluaran terformat
    fclose(fp); // tutup file

    fp = fopen("numbers.txt", "r"); // deklarasi fungsi (prototipe)
    if (!fp) { return 1; } // percabangan if (kondisi)
    int a; // deklarasi/penugasan variabel
    int b; // deklarasi/penugasan variabel
    int c; // deklarasi/penugasan variabel
    if (fscanf(fp, "%d %d %d", &a, &b, &c) == 3) // percabangan if (kondisi)
    { // awal blok kode
        printf("a=%d b=%d c=%d\n", a, b, c); // cetak teks/variabel ke layar
    } // akhir blok kode
    fclose(fp); // tutup file
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
