
#include<cstdio>
#include<cstring>

int a[20] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char M[15] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
int main()
{
	int N;
	scanf("%d", &N);
	char str[20];
	bool flag = true;
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);
		int last=0;
		int j = 0;

		for ( j = 0; j < 17; j++)
		{
			if (str[j]< '0' || str[j]>'9')break;//ǰ17λ�����������ټ������һλ��
			last += (str[j]-'0') * a[j];	//str��char��

		}
		//���λ��Ϊfalse�����
		if (j < 17)
		{
			flag = false;
			printf("%s\n", str);
		}
		else{
			if (M[last % 11] != str[17])
			{
				flag = false;
				printf("%s\n", str);
			}
		}

	}
	if (flag == true)
		printf("All passed\n");


	return 0;
}




