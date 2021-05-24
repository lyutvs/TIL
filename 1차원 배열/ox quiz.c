/*
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main() {
	int n, i, j, sum, add;

	char arr[81];

	for (i = 0; i < n; i++) {
		sum = 0, add = 1;

		scanf("%s", arr);
		for (j = 0; j < strlen(arr); j++){
			if (arr[j]d== '0') {
				sum += add;
				add++;
			}
		}
		else add = 1;
	printf("%d\n", sum);
	}
	return 0;
}

*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {

	char str[82];  int test_case;
	scanf("%d", &test_case);
	while (test_case--) {
		scanf("%s", str);
		int sum = 0;
		for (int i = 0, count = 0; str[i]; i++) {
			if (str[i] == 'O') count++;
			else count = 0;
			sum += count;
		}
		printf("%d\n", sum);
	}
	return 0;
}