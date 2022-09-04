//printing the integers of the elements in the matrix
#include<stdio.h>
int main()
//
{  
    int x[4][3];
    int i,j;
	printf("enter the integer elements of the matrix row wise");
	for(i=0; i<=3 ; i++)
	{
		for(j=0;j<=2; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
		
	for(i=0; i<=3 ; i++)
	{
		for(j=0;j<=2; j++)
		{
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}	
		
				
		
	
}
