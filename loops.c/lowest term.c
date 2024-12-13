/******************************************
* convert a fraction to its lowest term   *
******************************************/

#include<stdio.h>

int main ()
{
	int g, i, j, t ,n  ;

	printf ("Enter a fraction :");
	scanf("%d/%d", &i, &j);

	if (i > j)
		g = i, n = j;
	else 
		g = j, n = i;

	while (n)
	{
		t = g % n ;
		g = n ;
		n = t ;
	}

	printf ("The lowest term is : %d/%d", i/g, j/g);
}
