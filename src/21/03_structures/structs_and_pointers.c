/*
  Structs & pointers (-> operator) // akses field struct melalui pointer
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
  Jalankan: // langkah kode
    ./file   (Linux/macOS/WSL)  |  file.exe (Windows) // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#include <string.h> // sertakan header (library) yang dibutuhkan

struct Point { int x; int y; }; // langkah kode

void move(struct Point *p, int dx, int dy) // langkah kode
{ // awal blok kode
    p->x = p->x + dx; // penugasan nilai ke variabel
    p->y = p->y + dy; // penugasan nilai ke variabel
} // akhir blok kode

int main(void) // langkah kode
{ // awal blok kode
    struct Point pt = { 2, 3 }; // penugasan nilai ke variabel
    move(&pt, 5, -1); // langkah kode
    printf("Point=(%d,%d)\n", pt.x, pt.y); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
