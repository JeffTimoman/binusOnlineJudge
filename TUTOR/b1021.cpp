#include <stdio.h>

int main(){
	double temp;
	scanf("%lf", &temp);
	int money = temp * 100;
//	printf("%d" ,money);
	
	int a, b, c, d, e, f, g, h, i , j, k, l;
	a = money / 10000;
	money %= 10000;
	b = money/5000;
	money %= 5000;
	c = money/2000;
	money %= 2000;
	d = money/1000;
	money %= 1000;
	e = money/500;
	money %= 500;
	f = money/200;
	money %= 200;
	g = money/100;
	money %= 100;
	h = money / 50;
	money %= 50;
	i = money / 25;
	money %= 25;
	j = money / 10;
	money %= 10;
	k = money / 5;
	money %= 5;
	l = money;
	
	printf ("NOTAS:\n");
	printf ("%d nota(s) de R$ 100.00\n", a);
	printf ("%d nota(s) de R$ 50.00\n", b);
	printf ("%d nota(s) de R$ 20.00\n", c);
	printf ("%d nota(s) de R$ 10.00\n", d);
	printf ("%d nota(s) de R$ 5.00\n", e);
	printf ("%d nota(s) de R$ 2.00\n", f);
	printf ("MOEDAS:\n");
	printf ("%d moeda(s) de R$ 1.00\n", g);
	printf ("%d moeda(s) de R$ 0.50\n", h);
	printf ("%d moeda(s) de R$ 0.25\n", i);
	printf ("%d moeda(s) de R$ 0.10\n", j);
	printf ("%d moeda(s) de R$ 0.05\n", k);
	printf ("%d moeda(s) de R$ 0.01\n", l);
	
	

	return 0;
}
