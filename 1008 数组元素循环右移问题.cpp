#include<cstdio>
int main()
{
   int N, M;
	scanf("%d%d", &N, &M);
	int a[100];
    M=M%N;//题目没说M<N需对M进行处理，不然1,2样例无法通过
	for (int i = 0; i < N ; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = N-M; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	for (int i = 0; i < N - M; i++)
	{
		if (i == N - M - 1)
		{
			printf("%d", a[i]);
			break;
		}

		printf("%d ", a[i]);
	}
}
