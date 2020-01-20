#include<cstdio>

int main()
{
	int count[5] = { 0 };


	int arr[5] = { 0 };
	int n, temp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		if (temp % 5 == 0)
		{
			if (temp % 2 == 0)
			{
				arr[0] += temp;
				count[0]++;
			}
		}
		else if (temp % 5 == 1)
		{


			if (count[1] % 2 == 0)
				arr[1] += temp;
			else
				arr[1] -= temp;
			count[1]++;
		}
		else if (temp % 5 == 2)
			count[2]++;
		else if (temp % 5 == 3)
		{

			arr[3] += temp;
			count[3]++;
		}

		else
		{
			if (temp>arr[4])
			{
				arr[4] = temp;

			}
			count[4]++;
		}

	}

	if (count[0] == 0)printf("N ");
	else printf("%d ", arr[0]);
	if (count[1] == 0)printf("N ");
	else printf("%d ", arr[1]);
	if (count[2] == 0)printf("N ");
	else printf("%d ", count[2]);
	if (count[3] == 0)printf("N ");
	else printf("%.1f ", (double)arr[3]/count[3]);
	if (count[4] == 0)printf("N");
	else printf("%d", arr[4]);
	return 0;
}
