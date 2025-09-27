/*
  Switch pada karakter perintah // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    char cmd = 'y'; // deklarasi/penugasan variabel
    switch (cmd) // percabangan switch
    { // awal blok kode
        case 'y': // salah satu pilihan case
            printf("Yes\n"); // cetak teks/variabel ke layar
            break; // hentikan loop/switch saat ini
        case 'n': // salah satu pilihan case
            printf("No\n"); // cetak teks/variabel ke layar
            break; // hentikan loop/switch saat ini
        default: // pilihan default jika tidak ada case yang cocok
            printf("Unknown\n"); // cetak teks/variabel ke layar
            break; // hentikan loop/switch saat ini
    } // akhir blok kode
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
