#include<stdio.h>
void main()
{
	char arr[30];
	gets(arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] > 47 && arr[i] < 58)
		{
			arr[i] = 105-arr[i];
		}
		i++;
	}
	puts(arr);
}