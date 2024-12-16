/**********************************************
*   this program execute function operators   *
**********************************************/

#include <stdio.h>

int main ()
{

	int n1, d1, n2, d2, t ;
	char c ;

	printf ("Enter the first fraction : ");
	scanf ("%d/%d", &n1, &d1);

	printf ("Enter the second fraction : ");
	scanf ("%d/%d", &n2, &d2);
	
	getchar () ;

	printf ("Enter the operator : ");
	scanf ("%c", &c);

	if (c == '+')
		n1 = n1*d2 + n2*d1, d1 = d1*d2 ;
	else if (c == '-')
		n1 = n1*d2 - n2*d1, d1 = d1*d2 ;
	else if (c == '*')
		n1 = n1*n2, d1 = d1*d2 ;
	else if (c == '/')
		n1 = n1*d2, d1 = n2*d1 ;


	if (n1 > d1)
		n2 = n1, d2 = d1 ;
	else 
		n2 = d1, d2 = n1 ;

	while (d2)
	{
		t = d2 ;
		d2 = n2 % d2 ;
		n2 = t ;
	}

	printf ("The result is ") ;
	d1/n2 != 1 ? (printf ("%d/%d", n1/n2, d1/n2)) : printf ("%d", n1/n2) ;

}
		
