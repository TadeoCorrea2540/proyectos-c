#include <stdio.h>

int main(void)
{
    int n = 9;
    for (int i = 0; i<n; i++)
    {
        for(int k = n-1; k>i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}