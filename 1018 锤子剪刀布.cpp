#include<cstdio>
int convert(char c)
{
	if (c == 'B')return 0;
	if (c == 'C')return 1;
	if (c == 'J')return 2;

}
int main()
{
    char c[3] = { 'B', 'C', 'J'};
	//甲乙胜平负场数
	int a[3] = { 0 };
	int b[3] = { 0 };
	//甲乙各手势获胜次数
	int h1[3] = { 0 };
	int h2[3] = { 0 };
	char jia, yi;
	int N;
	int x,y;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		getchar();
		scanf("%c %c", &jia, &yi);

		 x = convert(jia);
		 y = convert(yi);
		// printf("x=%d,y=%d\n", x, y);
		//平局
		if (x == y)
		{
			a[1] = a[1] + 1;
			b[1] = b[1] + 1;

		}
		else if ((x+1)%3 == y)//甲胜
		{
			a[0] = a[0] + 1;
			b[2] = b[2] + 1;
			h1[x]++;


		}
		//乙胜
		else{
			a[2] = a[2] + 1;
			b[0] = b[0] + 1;
			h2[y]++;
		}
	}

	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n", b[0], b[1], b[2]);
	int max1 = 0, max2 = 0;
	for (int i = 0; i < 3; i++)
	{
		if (h1[i]>h1[max1])
			max1 = i;
		if (h2[i] > h2[max2])
			max2 = i;
	}
	printf("%c %c\n", c[max1], c[max2]);
	return 0;
}
