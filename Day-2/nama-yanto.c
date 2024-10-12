#include <stdio.h>

int main()
{
    char s[101]; // Deklarasi array karakter untuk menyimpan string dengan panjang maksimal 100 karakter.
    int i, j, len = 0;

    scanf("%s", s); // Membaca input string dari pengguna.

    // Menghitung panjang string secara manual hingga menemukan karakter null ('\0').
    while (s[len] != '\0')
    {
        len++;
    }

    // Loop untuk mengatur baris demi baris pola piramida terbalik.
    for (i = 0; i < len; i++)
    {
        // Loop pertama untuk mencetak spasi di setiap baris.
        for (j = 0; j < len - i - 1; j++)
        {
            printf(" ");
        }
        // Loop kedua untuk mencetak karakter dari awal string hingga indeks saat ini.
        for (j = 0; j <= i; j++)
        {
            printf("%c", s[j]);
        }
        // Pindah ke baris berikutnya setelah mencetak spasi dan karakter.
        printf("\n");
    }

    return 0;
}