#include<cstdio>

int main()
{
	int pg, ps, pk;//Ӧ��
	int ag, as, ak;//ʵ��
	scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);
	int g, s, k;
	//ת����Knut
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
