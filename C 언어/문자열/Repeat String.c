#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int max, min;
	char S[22];
	int size = 0;

	scanf("%d", &max);

	for (int i = 0; i < max; i++)
	{
		scanf("%d %s", &min, S);
		while (S[size] != '\0')
			size++;

		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < min; k++)
				printf("%c", S[j]);
		}
		printf("\n");
		size = 0;
	}


	return 0;
}