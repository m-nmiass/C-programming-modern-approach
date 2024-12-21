/************************************************
*   random walk project from chapter "Arrays"   *
************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void random_walk(char a[10][10])
{
	char ch = 'A' ;
	srand(time(NULL)) ;
	int k ;
	int i = rand() % 10 ;
	int j = rand() % 10 ;
	a[i][j] = ch++ ;
	int m = 1 ;

	while (ch <= 'Z')
	{

		k = rand() % 4 ;

		if (k == 0 && i > 0 && (a[i - 1][j] != '.'))
			a[--i][j] = ch++, m++ ;
		else if (k == 1 && j < 9 && (a[i][j+1] != '.'))
			a[i][++j] = ch++, m++ ;
		else if (k == 2 && i < 9 && (a[i + 1][j] != '.'))
			a[++i][j] = ch++, m++ ;
		else if (k == 3 && j > 0 && (a[i][j - 1] != '.'))
			a[i][--j] = ch++, m++ ;
		else if (!m)
		{
			if (( a[i-1][j] != '.' || (i == 0)) && (a[i+1][j] != '.' || (i == 9)) && (a[i][j+1] != '.' || (j == 9)) && (a[i][j-1] != '.' ||(j == 0)))
					return ;
		}
		m = 0 ;
	}
}

void print_walk(char a[10][10])
{
	int i = 0 ;
	int j = 0 ;
	
	while (i < 10)
	{
		while (j < 10)
		{
			printf ("%c ", a[i][j]);
			j++ ;
		}
		i++ ;
		printf ("\n");
		j = 0 ;
	}
}

int main ()
{
	char a[10][10] ;
	int i = 0 ;
	int j = 0 ;

	while (i < 10)
	{
		while (j < 10)
		{
			a[i][j] = '.' ;
			j++ ;
		}
		j = 0 ;
		i++ ;
	}

	random_walk(a);
	print_walk(a);
}
