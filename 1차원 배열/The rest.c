#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main() {
	int num[42] = { 0, };
	int i, j, k = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &j);
		num[j % 42]++;
	}
	for (i = 0; i < 42; i++) {
		if (num[i] != 0)
			k++;
	}
	printf("%d", k);
	return 0;
}