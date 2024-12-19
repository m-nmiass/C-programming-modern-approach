/******************************************************
*   This program translate message into BIFF filter   *
*      A = 4, B = 8, E = 3, I = 1, O = 0, S = 5       *
******************************************************/

#include<stdio.h>

int main()
{
	char c ;
	int f = 0 ;

	printf ("Enter message : ");

	while ((c = getchar()) != '\n')
	{
		if (!f)
			printf ("In B1FF-speak : "), f++;

		if (c >= 'a' && c <= 'z')
			c = c - 'a' + 'A' ;

		if (c == 'A')
			c = '4' ;
		else if (c == 'B')
			c = '8' ;
		else if (c == 'E')
			c = '3' ;
		else if (c == 'I')
			c = '1' ;
		else if (c == 'O')
			c = '0' ;
		else if (c == 'S')
			c = '5' ;

		printf("%c", c);
	}
	while (f < 11)
		printf ("!"), f++;
}

			
