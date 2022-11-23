#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 5

//float Cal(float data[])
//{
//	float sum = 0.0, mean, SD = 0.0;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		sum += data[i];
//	}
//	mean = sum / 5;
//	for (i = 0; i < 5; i++)
//	{
//		SD += pow(data[i] - mean, 2);
//	}
//	return sqrt(SD / 5);
//}

//int main(void)
//{
//	int i;
//	float data[5];
//	printf("Enter 5 real numbers: ");
//	for(i=0;i<5;i++)
//		scanf("%f ", &data[i]);
//	printf("\nStandard Deviation = %.3lf\n", Cal(data));
//	
//	return 0;
//}

//double pow(double a, double b); // a의 b승을 반환
//double sqrt(double x); //루트 x를 반환

float p_cal_avr_stdev(float num[], int size, float* mean, float* stdev)
{
	float sum = 0;
	float Ssum = 0;
	float variance;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += num[i];
	}
	*mean = sum / size;

	for (i = 0; i < size; i++)
	{
		Ssum += (num[i] - *mean) * (num[i] - *mean);
	}
	variance = Ssum / size;
	*stdev = sqrt(variance);
}

int main(void)
{
	float num[SIZE];
	int i;
	float mean, p_mean, p_stdev;

	printf("Enter 5 real numbers: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%f", &num[i]);
	}

	p_cal_avr_stdev(num, SIZE, &p_mean, &p_stdev);

	printf("\nStandard Deviation = %.3lf\n", p_stdev);

	return 0;
}

//double AVG(double* array, int size);
//double SD(double* array, int size, int option);