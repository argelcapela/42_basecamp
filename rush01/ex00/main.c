#include <unistd.h>
#include <stdio.h>

//void	ft_argv(int col1up, int col2up, int col3up, int col)

//4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2
// pega valores do argv
int main (int argc ,char **argv)
{
	int	row;
	int	col;
	int tab;
	tab = 4;
	char colup[tab];
	char coldown[tab];
	char rowleft[tab];
	char rowright[tab];
	int i;
	int j;
	int g;
	int h;
	int x;
	int y;
	
	
	row = 0;
	col = 0;

	i = 0;
	j = 0;
/////////////////////////////// get main argv values
	while(j < (2 * tab))
	{
		while(i < tab)
		{
			colup[i] = argv[1][j];						
			coldown[i] = argv[1][(2 * tab) + j]; 
			rowleft[i] = argv[1][(4 * tab) + j]; 
			rowright[i] = argv[1][(6 * tab) + j];
			j+=2;	
			i++;
		}
		i = 0;		
	}
//////////////////////////////// tudo x 
	char results[tab][tab];
	g = 0;
	h = 0;
	while(g < tab)
	{
		while(h < tab)
		{
			results[g][h]='x';		
			h++;	
		}
		h = 0;
		g++;		
	}
	
//////////////////////////// rules of skyscraper
	
// rule #1 - find '1' print tab(4)
			int z;

			z = 0;
			while (z < tab)
			{
				if(colup[z] == '1')
				{
					results[0][z]='4';					
				}
				if(coldown[z] == '1')
				{
					results[3][z]='4';					
				}
				if(rowleft[z] == '1')
				{
					results[z][0]='4';					
				}
				if(rowright[z] == '1')
				{
					results[z][3]='4';					
				}
				z++;				
			}	

// rule #2 - find '4' print 1-tab(4)
			z = 0;
			while (z < tab)
			{
				if(colup[z] == '4')
				{
					i = 0;
					while(i < tab)
					{
						results[i][z]= '0' + (i + 1);					
						i++;
					}
				}
				if(coldown[z] == '4')
				{
					i = tab;
					h = 1;
					while(i > 0)
					{
						results[i-1][z]= '0' + h;					
						i--;
						h++;
					}						
				}
				if(rowleft[z] == '4')
				{
					i = 0;
					while(i < tab)
					{
						results[z][i]= '0' + (i + 1);					
						i++;
					}
				}
				if(rowright[z] == '4')
				{
					i = tab;
					h = 1;
					while(i > 0)
					{
						results[z][i-1]= '0' + h;					
						i--;
						h++;
					}						
				}
				z++;				
			}	

// rule #3 -




















/*if(coldown[z] == '1')
				{
					results[3][z]='4';					
				}

				if(rowleft[z] == '1')
				{
					results[z][0]='4';
				}
				if(rowright[z] == '1')
				{
					results[z][3]='4';
				}

*/






////////////////////////////// print
	x = 0;
	y = 0;
	while(x < tab)
	{
		while(y < tab)
		{
			printf("%c",results[x][y]);		
			y++;	
		}
		y = 0;
		x++;
		printf("\n");	
	}

	return(0);
}

