#include<cstdio>
int main()
{
   int N, M;
	scanf("%d%d", &N, &M);
	int a[100];
    M=M%N;//��Ŀû˵M<N���M���д�����Ȼ1,2�����޷�ͨ��
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
