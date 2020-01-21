#include<stdio.h>
#include<string.h>

int main()
{
	char str[90];
	gets(str);
	char ans[90][90];
	int len = strlen(str);
	int r = 0, c = 0;

	for (int i = 0; i < len; i++)
	{

		if (str[i] != ' ')
		{

			ans[r][c] = str[i];
			c++;
		}
		else{
			ans[r][c] = '\0';
			r++;
			c = 0;
		}

	}
	for (int i = r; i >= 0; i--)
	{
		//for (int i = 0; i < c; i++)
			printf("%s", ans[i]);
            if(i>0)printf(" ");
	}
	return 0;
}
