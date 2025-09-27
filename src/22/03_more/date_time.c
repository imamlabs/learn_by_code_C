/*
  Date & Time: time(), localtime(), strftime() // waktu & tanggal (time.h)

  Kompilasi cepat: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file  (Linux/macOS/WSL)  |  file.exe (Windows/MinGW) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <time.h> // sertakan header (library) yang dibutuhkan

int main(void) // langkah kode
{ // awal blok kode
    time_t now = time(NULL); // deklarasi fungsi (prototipe)
    struct tm *lt = localtime(&now); // deklarasi fungsi (prototipe)
    char buf[64]; // deklarasi/penugasan variabel
    strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S", lt); // waktu & tanggal (time.h)
    printf("Sekarang: %s\n", buf); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
