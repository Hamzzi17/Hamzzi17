#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int count = 0;
	char input[100];

	printf("input> ");
	gets_s(input, sizeof(input), stdin);

	while (input[count])
	{
		//const int diff = 'a' - 'A';
		if (input[count] >= 65 && input[count] <= 90) // 대문자
			input[count] += 32; //소문자 치환
		else if (input[count] >= 97 && input[count] <= 122) // 소문자
			input[count] -= 32; //대문자 치환

		count++;
	}

	printf("%s", input);
}