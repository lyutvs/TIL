#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);


    for (int i = N; i > 0; i--) {
        for (int j = i - 2; j >= 0; j--) {
            printf(" ");
        }
        printf("*");
        for (int j = 2 * (N - i) - 1; j > 0; j--) {
            printf(" ");
        }
        if (i < N)
            printf("*");
        printf("\n");
    }
}
