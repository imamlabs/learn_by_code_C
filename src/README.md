# C Tutorial Practice Pack – Batch 3 (Memory → Errors → More)

Topik:
- Memory Management: malloc, calloc, realloc, free
- Errors: perror/errno, debugging printf, NULL checks, error handling via return, input validation
- More: date/time, random numbers, macros, organize code (multi-file), storage classes, bitwise

## Build cepat
```bash
make
# contoh menjalankan:
./build/01_memory_management/malloc_free
./build/02_errors/errors_perror_errno
./build/03_more/organize_code/main   # lihat catatan di Makefile khusus target multi-file
```

## Catatan:
- Pada `realloc`, selalu simpan ke pointer sementara lalu cek NULL sebelum menimpa pointer lama.
- Pastikan semua alokasi `malloc/calloc/realloc` di-`free` untuk mencegah memory leak.
- Cek nilai balik I/O dan validasi input pengguna untuk mencegah undefined behavior.
