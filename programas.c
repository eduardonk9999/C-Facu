#include<stdio.h>
int main( )
{
int i, j, matriz[2][2] = {10,20,30,40};
for (i = 0; i <= 1; i++)
{ for (j = 0; j <=1; j++)
{ printf ("matriz[%d][%d] = %d\n", i,j, matriz[i][j]);
} }
return 0;
}