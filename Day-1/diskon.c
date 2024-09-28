#include <stdio.h>

float input, diskon, total;

int main()
{
    scanf("%f", &input);

    // Jika total belanja kurang dari Rp. 100.000, tidak ada diskon.
    if (input < 100000)
    {
        total = input;
        // printf("%.2f", total);
    }

    // Jika total belanja antara Rp. 100.000 – Rp. 300.000, Anda mendapatkan diskon 10%.
    else if (input >= 100000 && input <= 300000)
    {
        total = input * 0.9;
        // printf("%.2f", total);
    }

    // Jika total belanja antara Rp. 300.000 – Rp. 500.000, Anda mendapatkan diskon 20%.
    else if (input >= 300000 && input <= 500000)
    {
        total = input * 80 / 100;
        // printf("%.2f", total);
    }

    // Jika total belanja di atas Rp. 500.000, Anda mendapatkan diskon 30%.
    else if (input > 500000)
    {
        diskon = input * 30 / 100;
        total = total - diskon;
        // printf("%.2f", total);
    }

    else
    {
        printf("Input tidak valid");
    }

    printf("%.2f\n", total);
    return 0;
}