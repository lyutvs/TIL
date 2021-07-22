#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{

    int arr[9] = { 0 };
    int i = 0, max = 0, target = 0;
    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            target = i + 1;
        }
    }
    printf("%d\n%d", max, target);
    return 0;
}
