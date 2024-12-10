/********************************************************************
*   addfrac but the user can enter both fraction at the same time   *
********************************************************************/

#include<stdio.h>

int main ()
{
	int n1, d1, n2, d2 ;

	printf("Enter two fractions seperated by a plus sign :");
	scanf ("%d/%d+%d/%d", &n1, &d1, &n2, &d2);

	printf("The sum is %d/%d", (n1*d2) + (n2*d1), d1*d2 );
}
