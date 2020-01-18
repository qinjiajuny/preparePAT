#include<cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int b, s,g;

		b=n / 100;
		s = n / 10 % 10;
		g = n % 10;

		while (b--)
		{
			printf("B");
		}
		while (s--)
		{
			printf("S");
		}
		int k = 1;
		while (g--)
		{

			printf("%d", k++);
		}


	return 0;
}
