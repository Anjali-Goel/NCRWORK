/*Given an unsorted array A of size N of non-negative integers, find a continuous
sub-array which adds to the given number
Example:
Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Ouptut: Sum found between indexes 2 and 4
Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Ouptut: Sum found between indexes 1 and 4
Input: arr[] = {1, 4}, sum = 0
Output: No subarray found*/
#include<stdio.h>
int main()
{
	int size, sum, i, j, temp, flag, l_limit = 0, h_limit = 0, array[50];
	printf("\nENTER THE SIZE OF THE ARRAY : ");
	scanf_s("%d", &size);
	printf("\nENTER THE VALUES OF THE ARRAY : \n");
	for (i = 0; i < size; i++) //TAKING THE INPUT VALUES FOR THE ARRAY
	{
		scanf_s("%d", &array[i]);
	}
	printf("\nENTER THE SUM : "); //THE SUM WHICH WE HAVE FIND THE SUB-ARRAY FOR
	scanf_s("%d", &sum);
	for (i = 0; i < size; ++i) //LOGIC FOR FINDING THE SUB-ARRAY
	{
		temp = 0;
		for (j = i; j < size; ++j)
		{
			temp = temp + array[j];
			if (temp == sum)
			{
				l_limit = i;
				h_limit = j;
				flag = 1;
			}
			else
			{
				flag = 0;
			}
		}

	}
	scanf_s("%d", &temp);
	getchar();
	return 0;
}