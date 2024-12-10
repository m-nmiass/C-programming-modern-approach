/******************************************************
*   line up product information entered by the user   *
******************************************************/

#include <stdio.h>

int main ()
{
	int n, d, m, y ;
	float p ;

	printf("Enter item number :");
	scanf ("%d", &n );

	printf("Enter unit price :");
	scanf ("%f", &p );

	printf("Enter purchase date (mm/dd/yyyy) :");
	scanf ("%d/%d/%d", &m, &d, &y );

	printf("Item\tUnit\tPurchase\n     \tPrice\tDate\n%d\t%.2f\t%d/%d/%d", n, p, d, m, y );
}
