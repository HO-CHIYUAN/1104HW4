#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubble_sort(int[], int);

int main()
{
	int A[SIZE] = { 12,2,81,14,6,8,7,5,23,10 }, i;

	printf("Origin array :\n");
	for (i = 0; i < SIZE; i++)
		printf("%4d", A[i]);

	bubble_sort(A, SIZE);

	printf("\n\nFinal array :\n");
	for (i = 0; i < SIZE; i++)
		printf("%4d", A[i]);

	printf("\n");
	system("pause");
	return 0;
}

void bubble_sort(int data[], int n)
{
	int i, j, temp, ii;
	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}

	}
}