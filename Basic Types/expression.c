/************************************************
*   evaluate an expression from left to write   *
************************************************/

#include<stdio.h>

int main ()
{
	float i = 0.0 ;
        double r ;
	char c ;

	printf ("Enter an expression : ");
	scanf ("%lf", &r);

	while ((c = getchar ()) != '\n')
	{
		switch (c) 
		{
			case '+' : 
				scanf ("%f", &i);
				r += i ;
				break ;
			case '-' :
				scanf ("%f", &i);
				r -= i ;
				break ;
			case '*' :
				scanf ("%f", &i);
				r *= i ;
				break ;
			case '/' :
				scanf ("%f", &i);
				r /= i ;
				break ;
			default :
				break ;
		}
	}
	printf ("The value of the expression is %lf", r);
}
