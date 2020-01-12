#include<cstdio>
#include<math.h>
int main()
{
	int DA, DB;
	long long A, B;
	scanf("%lld%d%lld%d", &A, &DA, &B, &DB);

	int PA=0, PB=0;
	int couta=0,coutb=0;
	for (int i = 0; A; i++)
	{
		if (A % 10 == DA){
			PA = PA + DA*pow(10.0,couta);
			couta++;
			//printf("PA=%d\n", PA);
		}
		A = A / 10;
		//printf("%lld\n", A);
	}
	//printf("%d", DA);
	for (int i = 0; B; i++)
	{
		if (B % 10 == DB){
			PB = PB + DB*pow(10.0,coutb);
			coutb++;
		}
		B = B / 10;
	}
	printf("%d\n", PA + PB);
	return 0;
}
