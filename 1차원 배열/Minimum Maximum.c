	#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int N, num;
	int max = -1000001, min = 1000001; //비쥬얼 에서만 못씀(너무 커서)잉 김모링 😍 🤢 🤢🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🤢 

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d ", &num);
		if (max < num) max = num;
		if (min > num) min = num;
	}
	printf("%d %d", min, max);


}

#include <stdio.h>
int main() {
	int arr[1000001], N, i;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("%d %d", min, max);

}