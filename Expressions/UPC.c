/*******************************************************
*     "UCP" or Universal Product code known as         *
*     the bar code each code contain 12 digits         *
*         first digit identify the item type           *
*        five digit identify the manufacturer          *
*            five digit identify the poduct            *
*             the final is the check digit	       *
* add n1 n3 n5 n7 n9 n11 * 3 and aadd n2 n4 n6 n8 n10  *
*  take the total sub 1  remaider by 10 sub from 9     *
*******************************************************/

#include<stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k ;

	printf("Enter the first (single) digit : ");
	scanf("%d", &a);

	printf("Enter first group of five digits :");
	scanf("%1d%1d%1d%1d%1d", &b, &c, &d, &e, &f);

	printf("Enter second group of five digits :");
	scanf("%1d%1d%1d%1d%1d", &g, &h, &i, &j, &k);

	a = (a + c + e + g + i + k) * 3 ;
	a = a + b + d + f + h + j - 1 ;
	a = 9 - (a % 10) ;
       	
	printf ("The check digit is : %d", a) ;
}	
