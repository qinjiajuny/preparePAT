#include<cstdio>

int main()
{
	int pg, ps, pk;//应付
	int ag, as, ak;//实付
	scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);
	int g, s, k;
	//转换成Knut
	int price = pg * 17 * 29 + ps * 29 + pk;
	int money = ag * 17 * 29 + as * 29 + ak;
	int gap =money-price;
	if (gap < 0){
		printf("-");
		gap = -gap;
	}
	g = gap / (17*29);
	s = gap%(17*29)/29;
	k = gap % 29;

	printf("%d.%d.%d\n", g, s, k);
	return 0;
}
