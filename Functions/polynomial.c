/*****************************************************
*   This program calculate the folowing polynomial   *
*         3X^5 + 2X^4 - 5X^3 - X^2 + 7X - 6          *
*****************************************************/
#include <stdio.h>

int ft_power (int x, int n) ;
int polynomial (int x)
{
	int s = 3 * ft_power (x , 5 ) ;
	s += 2 * ft_power (x, 4) ;
	s -= 5 * ft_power (x, 3) ;
	s -= x * x ;
	s += 7 * x ;
	s -= 6 ;

	return s ;
}

int ft_power (int x, int n)
{
	if (n == 0)
		return 1 ;
	if (n % 2 == 0 )
		return ft_power (x , n/2) * ft_power (x, n/2) ;
	if (n % 2 != 0 )
		return x * ft_power (x , n - 1) ;
}
