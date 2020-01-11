#include<cstdio>
int main()
{
	//参赛人数
	int N;
	//学校编号 分数
	int schID, schScore;
	//存储学校编号相同的总分
	int scoreSum[100000] = {0};//最初设置为10000显示段错误

	scanf("%d", &N);

	while (N)
	{
		scanf("%d%d", &schID,&schScore);
		scoreSum[schID] += schScore;//边输入分数边计算总分数
		N--;
	}
	int k=1;
	int MAX = -1;
	for (int i = 0; i <= schID; i++)
	{
		if (scoreSum[i]>MAX){//比较出分数最大的并用k记录其学校编号
			MAX = scoreSum[i];
			k = i;
		}
	}
	printf("%d %d\n", k, MAX);

	return 0;
}

