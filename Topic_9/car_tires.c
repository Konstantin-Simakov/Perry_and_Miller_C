/* car_tires.c -- calculates income after car tires selling */
#include <stdio.h>

#define SALES_TAX 	7.00		/* In percent */

int main(void)
{
	int num_tires;
	float tire_price, net_sales;
	num = tire_price = net_sales = 0;
	// --------------
	int x = 3;
	int y = 3;
	int z = 3;
	// --------------
	int i, j, k;
	i = 3;
	j = 4;
	k = 5;
	// --------------
	int t, p, q;
	t = p = q = 3;
	t = t + 5 * (q = q + 1);		/* Allowed */

	printf("How many tires have you got? ");
	scanf(" %d", &num_tires);

	printf("How many one tire does cost (in format $XX.XX)? ");
	scanf(" $%f", &tire_price);

	/* Calculating a price */
	net_sales = tire_price * num_tires * ((100 - SALES_TAX) / 100);
	printf("You spends $%.2f for tires.\n\n\n", net_sales);

	float ans = 5 + 2 * 4 / 2 % 3 + 10 - 3;
	float avg = (i + j + k + 1.0) / 4.0;
	printf("ans = %.2f, avg = %.2f\n", ans, avg);

	return 0;
}
