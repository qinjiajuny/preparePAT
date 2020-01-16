// 1028 人口普查.cpp : 定义控制台应用程序的入口点。
//


#include<cstdio>
#include<string.h>
struct People{
	char name[6];
	int year;
	int month;
	int date;
}temp, oldest, yougest, left, right;

bool max(People a, People b)//a小于等于b返回true
{
	if (a.year != b.year)return a.year <= b.year;
	else if (a.month != b.month) return a.month <= b.month;
	else return a.date <= b.date;
}
bool min(People a, People b)//a大于等于b返回true
{
	if (a.year != b.year)return a.year >= b.year;
	else if (a.month != b.month) return a.month >= b.month;
	else return a.date >= b.date;
}
void init()
{
	 yougest.year=left.year = 1814;
	oldest.year  = right.year = 2014;
	oldest.month = right.month = yougest.month = left.month = 9;
	oldest.date = right.date = yougest.date = left.date = 6;
}
int main()
{
	init();
	int N;
	int num = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{

		scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.date);
		if (max(temp, right) && min(temp, left))
		{
			num++;
			if (max(temp, oldest))oldest = temp;
			if (min(temp, yougest))yougest = temp;
		}


	}
	if (num == 0)printf("0\n");
		else
			printf("%d %s %s\n", num, oldest.name, yougest.name);
		return 0;
}


