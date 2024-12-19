/*****************************************
*   output the input in reverse order    *
*****************************************/

#include <stdio.h>

int main ()
{
	int n ;

	printf ("How many numbers do you want to reverse : ");
	scanf ("%d", &n) ;
	
	printf ("Enter %d number(s) : ", n);

	int a[n--] ;
	int i = n ;

	while (n >= 0)
		scanf ("%d", &a[n--]);

	printf ("The numbers in reverse is : ");

	n++ ;

	while (n <= i)
		printf ("%d  ", a[n++]) ;
}
