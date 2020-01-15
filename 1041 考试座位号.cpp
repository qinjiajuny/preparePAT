#include<cstdio>
struct Student{
	long long	id;
	int examid;
};
int main()
{
	int N;
	scanf("%d", &N);
	int seat,exam;
    long long id;
	Student stu[1010];
	for (int i = 0; i < N;i++)
	{
		scanf("%lld%d%d", &id, &seat, &exam);
        stu[seat].id=id;
        stu[seat].examid=exam;
	}
	int searchSum;

	scanf("%d", &searchSum);
	for (int i = 0; i < searchSum; i++)
	{
		scanf("%d", &seat);
		printf("%lld %d\n", stu[seat].id, stu[seat].examid);
	}


	return 0;
}


