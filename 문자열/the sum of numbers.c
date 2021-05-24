#include <stdio.h>
int main() {
    int max, i, sum = 0;
    char arr[101] = {};
    scanf("%d", &max);
    scanf("%s", arr);

    for (i = 0; i < max; i++)
        sum += arr[i] - 48;
    printf("%d", sum);

    return 0;
}