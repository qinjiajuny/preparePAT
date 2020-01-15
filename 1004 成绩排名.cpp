#include<cstdio>
#include<string.h>

struct Student{
	char  name[11];//大小必须比10大
	char id[11];
	int score;
};
int main()
{
	int n;
	scanf("%d", &n);
	Student stu[1000];
	int max=-1, min=101;//得设置最高和最低的初始分数，否则最后一组样例无法通过
	int maxi = 0, mini = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%d", stu[i].name, stu[i].id, &stu[i].score);
		if (stu[i].score > max)
		{
			max = stu[i].score;
			maxi = i;
		}
		if (stu[i].score < min)
		{
			min = stu[i].score;
			mini = i;
		}
	}
	printf("%s %s\n", stu[maxi].name, stu[maxi].id);
	printf("%s %s\n", stu[mini].name, stu[mini].id);

	return 0;
}
