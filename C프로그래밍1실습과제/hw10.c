#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//struct point
//{
//	int xpos;
//	int ypos;
//};
//
//int main(void)
//{
//	struct point pos1, pos2;
//	double distance;
//	fputs("point1 pos: ", stdout);
//	scanf("%d %d", &pos1.xpos, &pos1.ypos);
//	fputs("point2 pos: ", stdout);
//	scanf("%d %d", &pos2.xpos, &pos2.ypos);
//
//	/* 두 점 간의 거리 계산 공식 */
//	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos)
//		+ (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
//	printf("두 점의 거리는 %g 입니다. \n", distance);
//	return 0;
//}

typedef struct City
{
	char name[20];
	char country[30];
	int population;
}; City;

void ClearBuffer(void)
{
	while (getchar() != '\n');
}

int main(void)
{
	struct City arr[3];
	int i;
	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("Population> ");
		scanf("%d", &arr[i].population);
		getc(stdin);
	}
	printf("\nPrinting the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("%d. ", i + 1);
		fputs(arr[i].name, stdout);
		printf("in ");
		fputs(arr[i].country, stdout);
		printf("with a population of %d people\n", arr[i].population);
	}
	return 0;
}

//int main(void)
//{
//	struct city[3];
//
//	int i;
//	printf("Input three cities: \n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("Name> ");
//		scanf("%s", arr[i].name);
//		printf("Country> ");
//		scanf("%s", arr[i].country);
//		printf("Population> ");
//		scanf("%d", &arr[i].population);
//	}
//	printf("\nPrinting the three cities: \n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d. ", i + 1);
//		printf("%s", arr[i].name);
//		printf("in %s ", arr[i].country);
//		printf("with a population of %d people\n", arr[i].population);
//	}
//	return 0;
//}