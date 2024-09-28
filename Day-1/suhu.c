#include <stdio.h>

float C, F, K, R;

int main()
{
    scanf("%f", &C);

    // Celcius ke Fahrenheit: (9/5) × ⁰C + 32|
    F = 9 * C / 5 + 32;

    // Celcius ke Kelvin: K= ⁰C + 273,15|
    K = C + 273.15;

    // Celcius ke Reamur:⁰R = (4/5) ⁰C|
    R = 4 * C / 5;

    printf("%.2f\n", R);
    printf("%.2f\n", K);
    printf("%.2f\n", F);
}