#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }//별 두개
        printf("\n");

    }//두번

    return 0;
}

