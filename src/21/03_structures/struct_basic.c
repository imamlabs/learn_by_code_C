/*
  Struct: mengelompokkan data terkait // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan

struct Person // langkah kode
{ // awal blok kode
    char name[32]; // deklarasi/penugasan variabel
    int age; // deklarasi/penugasan variabel
}; // langkah kode

int main(void) // langkah kode
{ // awal blok kode
    struct Person p; // langkah kode
    strcpy(p.name, "Imam"); // operasi string (string.h)
    p.age = 30; // penugasan nilai ke variabel
    printf("Nama=%s Umur=%d\n", p.name, p.age); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
