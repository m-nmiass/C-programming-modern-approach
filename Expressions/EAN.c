/*************************************************
*   "EAN" or European artical numbee is almost   *
*       simular to UPC used but use 13 digit     *
*       This code calculate the check number     *
*************************************************/

#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l ;
	
	printf("Enter the first 12 digits of a EAN : ");
	scanf ("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l );

	a = a + c + e + g + i + k  ;
        a = a + ((b + d + f + h + j + l)*3) - 1 ;
	a = 9 - ( a % 10 ) ;

	printf("Check digit : %d", a ) ;
}

