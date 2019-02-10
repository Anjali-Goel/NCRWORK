#include<stdio.h>
main()
{
	int arr[] = { 0 };
	int n, i, j, temp;
	char exit;
	printf("ENTER THE SIZE OF THE ARRAY : ");
	scanf_s("%d", &n);
	printf("ENTER THE ARRAY ELEMENTS\n");
	for (i = 0; i < n; ++i)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < n; ++i)
	{
		for (j = n-1; j >i ; --j)
		{
			if (arr[j-1] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	printf("\n");
	for (i = 0; i < n; ++i)
	{
		printf(" %d ", arr[i]);
	}
	printf("\nPRESS ENTER TO EXIT");
	scanf_s("%c", &exit);
	getchar();
}