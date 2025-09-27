/*
  Validasi input menggunakan scanf hasil balik // langkah kode

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    int age = 0; // deklarasi/penugasan variabel
    printf("Masukkan umur: "); // cetak teks/variabel ke layar
    if (scanf("%d", &age) != 1) // percabangan if (kondisi)
    { // awal blok kode
        printf("Input bukan angka integer.\n"); // cetak teks/variabel ke layar
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    if (age < 0 || age > 150) // percabangan if (kondisi)
    { // awal blok kode
        printf("Umur di luar rentang wajar.\n"); // cetak teks/variabel ke layar
        return 1; // kembalikan nilai dari fungsi
    } // akhir blok kode
    printf("Umur valid: %d\n", age); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
