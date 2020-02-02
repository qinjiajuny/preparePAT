#include<stdio.h>
#include<string.h>
int main()
{
	char a[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int num[10] = { 0 };
	char c[1010];
	gets(c);
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j++)
			if (c[i] == a[j])num[j]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i]>0)
			printf("%d:%d\n", i, num[i]);
	}
	return 0;
}
