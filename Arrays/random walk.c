/**************************************************
*   The program randommly walk on a board 10*10   *
**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	char a[10][10] ;
	char ch = 'A' ;
	int i = 0 ;
	int j = 0 ; 
	int k ;
	srand (time(NULL)) ;

	while (i < 10)
	{
		while(j < 10)
			a[i][j++] = '.' ;
		j = 0 ;
		i++ ;
	}

	i = 0, j = 0 ;

	while (ch <= 'Z')
	{
		k = rand() % 4 ;
		if (k == 0 && a[i][j-1] == '.' && (j > 0))
		{
			a[i][--j] = ch ;
			ch++ ;
		}
		else if (k == 1 && a[i+1][j] == '.' && (i < 9))
		{
			a[++i][j] = ch ;
			ch++ ;
		}
		else if (k == 2 && a[i][j+1] == '.' && (j < 9))
		{
			a[i][++j] = ch ;
			ch++ ;
		}
		else if (k == 3 && a[i-1][j] == '.' && (i > 0))
		{
			a[--i][j] = ch ;
			ch++ ;
		}
		else
		{
			if ((a[i-1][j] != '.' || (i == 0 )) && (a[i+1][j] != '.' || i == 9 ) && (a[i][j+1] != '.' || (j == 9)) && (a[i][j-1] != '.' || (j == 0)))
				break ;
		}
	}

	i = 0, j = 0 ;

	while (i < 10)
	{
		while (j < 10)
			printf ("%c ",a[i][j++]);
		j = 0 ;
		i++ ;
		printf ("\n");
	}
}

