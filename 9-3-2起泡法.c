#include<stdio.h>
#define N 128
#include<string.h>
void main()
{
	char arr[N];
	gets(arr);
	int l = strlen(arr);
	for (int i = 0; i <=l-2; i++)
	{
		for (int j = 0; j < l - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				char t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	puts(arr);

}