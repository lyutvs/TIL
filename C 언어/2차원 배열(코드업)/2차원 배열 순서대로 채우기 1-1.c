#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main(void) {

    int arr[101][101] = {};
    int n, i, j, num;
    scanf("%d", &n);
    num = 1;
    // 배열 초기화
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = num++;
        }
    }
    // 출력
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}