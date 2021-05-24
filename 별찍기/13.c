#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;
    scanf("%d", &star);

    for (int i = 0; i < star; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = star - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}