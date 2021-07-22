#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = n; k > i; k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}