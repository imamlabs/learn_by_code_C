/*
  Bitwise flags: set, clear, toggle, check // langkah kode
  Catatan: // langkah kode
  - Komentar Bahasa Indonesia agar mudah dipahami. // langkah kode
  - Satu perintah per baris untuk keterbacaan. // langkah kode
  Kompilasi: // langkah kode
    gcc file.c -o file // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
#define F_READ  (1u<<0) // makro preprosesor (#define)
#define F_WRITE (1u<<1) // makro preprosesor (#define)
#define F_EXEC  (1u<<2) // makro preprosesor (#define)
int main(void) // langkah kode
{ // awal blok kode
    unsigned int flags = 0u; // penugasan nilai ke variabel
    flags = flags | F_READ; // penugasan nilai ke variabel
    flags = flags | F_WRITE; // penugasan nilai ke variabel
    flags = flags ^ F_EXEC; // penugasan nilai ke variabel
    int can_read = (flags & F_READ) ? 1 : 0; // deklarasi/penugasan variabel
    int can_exec = (flags & F_EXEC) ? 1 : 0; // deklarasi/penugasan variabel
    printf("flags=%u read=%d exec=%d\n", flags, can_read, can_exec); // cetak teks/variabel ke layar
    flags = flags & ~F_WRITE; // penugasan nilai ke variabel
    printf("after clear write, flags=%u\n", flags); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
