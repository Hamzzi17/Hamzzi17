#include <stdio.h>
void Swap(int arr1[], int arr2[]);
void Print(int arr1[]);
int main(void)
{	// 배열 arr1, arr2 선언 및 초기화
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int i, temp;
	printf("arr1: "); Print(arr1);
	printf("arr2: "); Print(arr2);

	Swap(arr1, arr2);
	// ptr1, ptr2에 arr1, arr2를 각각 포인터로 지정
	//int* ptr1 = &arr1[i];
	//int* ptr2 = &arr2[i];
	//int* temp; // 비어있는 임시 포인터 생성

	printf("\nafter swap\n");

	printf("arr1: "); Print(arr1);
	printf("arr2: "); Print(arr2);

	return 0;
}
// 두 배열에 저장된 요소들의 값을 하나씩 서로 교환하기
void Swap(int arr1[], int arr2[])
{
	int i, temp;
	for (i = 0; i < 6; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

void Print(int arr1[])
{
	int i;
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\n");
}