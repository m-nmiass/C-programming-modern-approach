/*************************************
*   ACME checkbook-balancing program *
*************************************/

#include<stdio.h>

int main ()
{
	int c ;
	float s, a ;

	s = 0 ;
	a = 0 ;

	printf ("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

	do
	{
		printf("Enter command : ");
		scanf ("%d", &c);
		
		if (c == 4)
			break ;

		if (c == 3)
		{
			printf ("Current balance : %.2f\n", s);
			continue ;
		}
		else if (c == 1 || c == 2)
			printf ("Enter amount of : ");
			
		if (c == 0)
			s = 0 ;
		else if (c == 1)
		{
			printf ("credit : ");
			scanf("%f", &a); 
			s += a ;
		}
		else if (c == 2)
		{
			printf ("debit : ");
			scanf("%f", &a);
			s -= a ;
		}

	}while (1) ;
}
