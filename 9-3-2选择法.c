#include<stdio.h>
#define N 128
#include<string.h>
void main()
{
	char arr[N];
	gets(arr);
	int l=strlen(arr);
	for (int i = 0;i<l-1;i++)
	{
		int k;
		for (int j = i,k = j + 1; k < l; k++)
		{
			 
			if (arr[j] > arr[k])
			{
				char t = arr[j];
				arr[j] = arr[k];
				arr[k] = t;
			}
		}
	}
	puts(arr);
}