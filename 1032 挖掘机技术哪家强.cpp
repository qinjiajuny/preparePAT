#include<cstdio>
int main()
{
	//��������
	int N;
	//ѧУ��� ����
	int schID, schScore;
	//�洢ѧУ�����ͬ���ܷ�
	int scoreSum[100000] = {0};//�������Ϊ10000��ʾ�δ���

	scanf("%d", &N);

	while (N)
	{
		scanf("%d%d", &schID,&schScore);
		scoreSum[schID] += schScore;//����������߼����ܷ���
		N--;
	}
	int k=1;
	int MAX = -1;
	for (int i = 0; i <= schID; i++)
	{
		if (scoreSum[i]>MAX){//�Ƚϳ��������Ĳ���k��¼��ѧУ���
			MAX = scoreSum[i];
			k = i;
		}
	}
	printf("%d %d\n", k, MAX);

	return 0;
}

