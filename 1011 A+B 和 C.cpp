#include<cstdio>
int main()
{
    int T;//²âÊÔÓÃÀı¸öÊı
	long long A[11], B[11], C[11];
	scanf("%d", &T);
	int i = 1;
	while (i<=T)
	{
		scanf("%lld%lld%lld", &A[i], &B[i], &C[i]);

		i++;

	}
	for(int j = 1; j <=T; j++)
	{
		if (A[j] + B[j] > C[j])
			printf("Case #%d: true\n", j);
		else
			printf("Case #%d: false\n", j);
	}
    return 0;
}
