#include <string.h>
#include <stdio.h>

int main()
{
    int n, x, i, index = -1;

    scanf("%d", &n); // Membaca jumlah elemen array.

    int array[n]; // Mendeklarasikan array dengan panjang n.

    // Loop untuk membaca elemen-elemen array dari input.
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &x); // Membaca angka yang ingin dicari dalam array.

    // Loop untuk mencari angka x dalam array.
    for (i = 0; i < n; i++)
    {

        if (array[i] == x)
        { // Jika angka ditemukan, simpan indeksnya.
            index = i;
            break; // Berhenti mencari begitu angka ditemukan.
        }
    }

    // Mengecek apakah angka ditemukan atau tidak.
    if (index != -1)
    {
        printf("Angka ditemukan pada index ke-%d\n", index); // Jika ditemukan, cetak indeksnya.
    }
    else
    {
        printf("Alamak, Angkanya Gaada!\n"); // Jika tidak ditemukan, cetak pesan kesalahan.
    }

    return 0;
}