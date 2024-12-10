/*******************************************************************
*	this programe is an iproved version of dweight		   *
*	allowing the user to enter height length width             *
*******************************************************************/

#include<stdio.h>

int main ()
{
	int height ,length ,width ,volume ,DIW ;
	
	printf ("Enter the height :");
	scanf  ("%d" ,&height );

	printf ("Enter the length :");
	scanf  ("%d" ,&length);

	printf ("Enter the width :");
	scanf  ("%d" ,&width);

	volume = height * length * width ;
	DIW    = (volume + 165)/166 ;

	printf ("The volume is :%d \n" ,volume);
	printf ("The Dimensional weight is :%d \n" ,DIW);

	return 0;
}
