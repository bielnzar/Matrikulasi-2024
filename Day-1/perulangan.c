#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 6; i++)
    {
        // Jika i adalah 4, maka abaikan perintah printf()
        if (i == 2)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}