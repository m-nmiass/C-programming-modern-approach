/***************************
*    Form a magic square   *
***************************/

#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

	printf ("Enter the numbers from 1 to 16 in any order :");
	scanf ("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

	printf ("%4d %4d %4d %4d\n%4d %4d %4d %4d\n%4d %4d %4d %4d\n%4d %4d %4d %4d\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
	printf ("Row sums : %d %d %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
	printf ("Column sums : %d %d %d %d\n", a+e+i+m, b+f+k+n, c+g+k+o, d+h+l+p);
	printf ("Diagonal sums : %d %d", a+f+k+p, d+g+j+m);
}
