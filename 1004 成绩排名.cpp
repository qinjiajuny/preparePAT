#include<cstdio>
#include<string.h>

struct Student{
	char  name[11];//��С�����10��
	char id[11];
	int score;
};
int main()
{
	int n;
	scanf("%d", &n);
	Student stu[1000];
	int max=-1, min=101;//��������ߺ���͵ĳ�ʼ�������������һ�������޷�ͨ��
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
