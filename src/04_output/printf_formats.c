/*
  printf dengan format // tulis keluaran terformat
  Kompilasi: // langkah kode
    gcc file.c -o file      # Linux/macOS/WSL (GCC) // langkah kode
    .\file.exe             # Windows (MinGW) setelah kompilasi // langkah kode
*/ // langkah kode

#include <stdio.h> // sertakan header (library) yang dibutuhkan
int main(void) // langkah kode
{ // awal blok kode
    int age = 21; // deklarasi/penugasan variabel
    double pi = 3.14159; // deklarasi/penugasan variabel
    char grade = 'A'; // deklarasi/penugasan variabel
    printf("Age = %d\n", age); // cetak teks/variabel ke layar
    printf("Pi  = %.2f\n", pi); // cetak teks/variabel ke layar
    printf("Grade = %c\n", grade); // cetak teks/variabel ke layar
    return 0; // kembalikan nilai dari fungsi
} // akhir blok kode
