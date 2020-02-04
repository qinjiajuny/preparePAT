#include<stdio.h>
#include<string.h>

int main()
{
	char c[110];
	gets(c);
	int len = strlen(c);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum =sum+(c[i]-'0');
	}
	int k = 0;
	int ans[10] = { 0 };

	while (sum!=0)
	{
		ans[k] = sum % 10;
		sum = sum / 10;
		k++;
	}
	char change[10][5] = { "ling","yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	for (int i = k-1; i >=0; i--)
	{
		printf("%s", change[ans[i]]);
		if (i != 0)printf(" ");
		else printf("\n");
	}



	return 0;
}

