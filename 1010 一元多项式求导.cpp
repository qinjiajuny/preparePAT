#include<cstdio>
int main()
{
    int x[1010] = {0};
	int k=0,e=0,cout=0;//x[k]表示指数为k的系数是多少
	while (scanf("%d%d", &k, &e) != EOF)
		x[e] = k;
	x[0] = 0;
	for (int i = 1; i <= 1000; i++)
	{
		x[i - 1] = x[i] * i;
		x[i] = 0;
		if (x[i - 1] != 0)cout++;
	}
	if (cout == 0)printf("0 0");
	else{
		for (int i = 1000; i >= 0; i--)
		{
			if (x[i] != 0){
				printf("%d %d", x[i], i);
				cout--;
				if (cout != 0)printf(" ");
			}

		}
	}


	return 0;
}
