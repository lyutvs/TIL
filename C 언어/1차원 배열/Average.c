#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
    
    int num, i;
    double arr[1000], max = 0, min = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%lf", &arr[i]);

        if (max < arr[i])
            max = arr[i];
    }

    for (i = 0; i < num; i++) {
        arr[i] = arr[i] / max * 100.0;
        min += arr[i];
    }

    printf("%.2lf", (min / (double)num));
}