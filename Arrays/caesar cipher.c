/**********************************************************
*   This program encrypts a message using Ceasar cipher   *
**********************************************************/

#include<stdio.h>

int main ()
{
	int n, i, j ;
	char c[80] = {0} ;
	i = 0 ;

	printf ("Enter message to be encrypted : ");

	while ((c[i++] = getchar()) != '\n') ;
	

	printf ("Enter sift amount (1-25) : ");
		scanf ("%d", &n);

	j = 0 ;

	while (j < i)
	{
		if (c[j] >= 'A' && c[j] <= 'Z')
			c[j] = ((c[j] - 'A') + n) % 26 + 'A' ;
		else if (c[j] >= 'a' && c[j] <= 'z')
			c[j] = ((c[j] - 'a') + n) % 26 + 'a' ;
		printf ("%c", c[j++]);
	}
}
		
