#include<cstdio>

int main()
{
	int a, b;
	int d;
	scanf("%d%d%d", &a, &b, &d);
	int x[100] = { 0 };
	int sum = a + b;

	int k=0;
      //a+b=0时需要特判
    if(sum==0)
    printf("0");
	while (sum!=0)
	{
		x[k++] = sum % d;

		sum = sum / d;
	}
	for (int i = k-1; i >=0; i--)
	{
		printf("%d", x[i]);
	}


	return 0;
}
