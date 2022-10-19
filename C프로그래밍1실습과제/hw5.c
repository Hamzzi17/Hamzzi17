#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bin(int n);

void main()
{
	int n;
	printf("Please enter a number: ");
	scanf("%u", &n);
	bin(n);
	return 0;
}

void bin(int n)
{
	if (n < 2)
	{
		printf("%d", n);
	}
	else
	{
		bin(n / 2);
		printf("%d", n % 2);
	}
}
