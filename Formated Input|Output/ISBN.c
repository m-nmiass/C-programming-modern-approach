/****************************************************
*   "ISBN" for international standard book number   *
*   	ISBN contain five groups with 13 digit      *
*   	The first group called GSI 978 or  979      *
*Group identifier "languge countries origin"(0/1eng)*
*		  Publisher code		    *
*	Item number identify the specific book	    *
*	       Check digit for accuracy             *
****************************************************/

#include <stdio.h>

int main ()
{
	int gsi, iden, pub, item, check ;

	printf("Enter ISBN :");
	scanf ("%d-%d-%d-%d-%d", &gsi, &iden, &pub, &item, &check);

	printf("GSI prefix :%d\n", gsi);
	printf("Group identifier :%d\n", iden);
	printf("Publisher code :%d\n", pub);
	printf("Item number :%d\n", item);
	printf("Check digit :%d\n", check);
}
