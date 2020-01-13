#include<cstdio>
int main()
{
    int a1=0, a2=0, a3=0,a4=0,a5=0;


	int arr[1000];
	scanf("%d", &arr[0]);
	int N=arr[0];
	for (int i = 1; i <=N; i++)
		scanf("%d", &arr[i]);
	int k = 0;
	for (int i = 1,j=0,max=0; i < N+1; i++)
	{
		if (arr[i] % 5 == 0)
        {
            if(arr[i]%2==0)
			a1 = a1 + arr[i];
        }
		else if (arr[i] % 5 == 1)
		{

			j++;
			if (j % 2 == 0)
				a2 -= arr[i];
			else
				a2 += arr[i];

		}
		else if (arr[i] % 5 == 2)
			a3++;
		else if (arr[i] % 5 == 3)
		{
			//printf("%d*", arr[i]);
			a4 += arr[i];
			k++;
		}

		else
		{
			if (max < arr[i])
			{
				max = arr[i];
				a5 = max;
			}
		}

	}

	if (a1 == 0)printf("N ");
	else printf("%d ", a1);
	if (a2 == 0)printf("N ");
	else printf("%d ", a2);
	if (a3 == 0)printf("N ");
	else printf("%d ", a3);
	if (a4 == 0)printf("N ");
	else printf("%.1f ", (double)a4/k);
	if (a5 == 0)printf("N");
	else printf("%d", a5);
	return 0;
}
