#include<cstdio>
int main(){
	int N;
	scanf("%d", &N);
	int doA, doB;//?????
	int sA, sB;//????
	int dA=0, dB=0;//????
	while (N--)
	{

		scanf("%d%d%d%d", &sA, &doA, &sB, &doB);
		if (sA + sB == doA&&sA + sB == doB)
			continue;
		else if (sA + sB != doA&&sA + sB != doB)
			continue;
		else
		{
			if (sA + sB == doA)
				dB++;
			else
				dA++;
		}

	}
	printf("%d %d", dA, dB);
}
