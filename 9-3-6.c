#include<stdio.h>
char* Gets(char * buffer);
void Puts(char * buffer);
char *Strcpy(char * dest, char *src);
char*Strcat(char *dest, char * src);
const int Strcmp(char *str1, char *str2);
int Strlen(char * str);
void main()
{
	char word[100], word_copy[100];
	printf("Gets函数测试：\n输入一个字符串：\n");
	Gets(word);
	printf("Puts函数测试：\n");
	Puts(word);
	printf("Strcpy函数测试：\n");
	Strcpy(word_copy, word);
	Puts(word_copy);
	printf("Strcat函数测试:\n输入两个字符串\n");
	char s1[100] , s2[100];
	Gets(s1);Gets(s2);
	Strcat(s1, s2);
	Puts(s1);
	printf("Strcmp函数测试(可测4次)：\n");
	char s3[100], s4[100];
	for (int k = 0; k <4; k++)
	{
		printf("输入两个字符串:\n");
		Gets(s3);Gets(s4);
		if (Strcmp(s3, s4) > 0)			Puts("s3>s4");
		else if (Strcmp(s3, s4) < 0)	Puts("s3<s4");
		else							Puts("s3=s4");		
	}
	printf("Strlen函数测试:\n输入一个字符串\n");
	char s5[100];
	Gets(s5);
	printf("长度为%d", Strlen(s5));
}
char* Gets(char * buffer)
{
	int i = 0;
	do
	{
		char c=getchar();
		buffer[i] = c;
		i++;
	} while (buffer[i-1] != '\n');
	buffer[i - 1] = '\0';
	return buffer;
}
void Puts(char * buffer)
{
	int i = 0;
	while (buffer[i] != '\0')
	{
		putchar(buffer[i]);
		i++;
	}
	putchar('\n');
}
char *Strcpy(char * dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
char*Strcat(char *dest, char * src)
{
	int i = 0,j=0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}
const int Strcmp(char *str1, char *str2)
{
	int i  = 0;
	while (str1[i] == str2[i] && str1[i] != '\0'&&str2[i] != '\0')
		i++;
	if (str1[i] > str2[i])	return 1;
	if (str1[i] < str2[i])	return -1;
	if (str1[i] == str2[i])	return 0;
}
int Strlen(char * str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
