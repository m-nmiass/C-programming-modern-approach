/**********************************************
*   Change phone number from (xxx) xxx-xxxx   *
* 	         to xxx.xxx.xxxx              *
**********************************************/

#include<stdio.h>

int main ()
{
	int i, j, k ;

	printf("Enter phone number [(xxx) xxx-xxxx] :");
	scanf ("(%d)%d-%d", &i, &j, &k );
	
	printf("You entered %d.%d.%d", i, j, k);
}
