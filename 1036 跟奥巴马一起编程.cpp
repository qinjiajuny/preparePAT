#include<cstdio>

int main()
{
	int a;
	char c;
	int row, col;
	scanf("%d %c", &a, &c);
	if (a % 2 == 0)
		row = a / 2;
	else
		row = a / 2 + 1;
	col = a;
	for (int i = 0; i < col; i++)
		printf("%c", c);
	printf("\n");

	for (int i = 2; i < row ; i++)
	{
		printf("%c", c);
		for (int j = 0; j < col - 2; j++)
			printf(" ");
		printf("%c\n",c);
	}

	for (int i = 0; i < col; i++)
		printf("%c", c);


	return 0;
}
