#include <stdio.h>
int main()
{
   int abc[4][4] =
   {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            };
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i <= 4)
    {
    	while (j <=4)
		{
			printf("%p ",&abc[i][j]);
			i++;
		}
    }
    return 0;
}