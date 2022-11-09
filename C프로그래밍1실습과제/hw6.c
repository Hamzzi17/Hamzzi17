#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Odd(int X)
{
	if (X % 2 == 1)
	{
		printf("%d ", X);
	}
	return 0;
}

int Even(int Y)
{
	if (Y % 2 == 0)
	{
		printf("%d ", Y);
	}
	return 0;
}

int main(void)
{
	int Array[5];
	int i;

	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &Array[i]);
	}

	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		Odd(Array[i]);
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++)
	{
		Even(Array[i]);
	}
	return 0;
}

printf("aaa");