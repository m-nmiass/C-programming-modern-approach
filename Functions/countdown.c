/****************************
*    Program to countdown   *
****************************/

#include <stdio.h>

void print_count (int n)
{
	printf ("T minus %d and counting\n", n);
}

int main ()
{
	int i = 10 ;

	while (i)
		print_count(i--) ;
}
