/***************************************
*   convert decimal to ocatal number   *
***************************************/

#include<stdio.h>

int main ()
{
	int i , j ;
	
	printf ("Enter a number between 0 and 32767 :");
	scanf ("%d", &i);

	j = i % 8 ;
	i /= 8 ;
	j = j + (i % 8)*10 ;
	i /= 8 ;
	j =  j + (i % 8)*100 ;
	i /= 8 ;
	j = j + (i % 8)*1000 ;
	i /= 8 ;
	j = j + (i % 8) * 10000 ;


	printf("in octal your number is : 0%d", j); 
}
