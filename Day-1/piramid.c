#include <stdio.h>

int main(void)
{

    int tinggi_segitiga = 10;
    int i, j, k;

    printf("\n");

    for (i = 0; i < tinggi_segitiga; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= tinggi_segitiga - i; k++)
        {
            printf(" *");
        }

        printf("\n");
    }

    return 0;
}