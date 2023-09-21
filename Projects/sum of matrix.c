#include<stdio.h>
int main()
{
	int i,j,k,l;
	int sum[3][3];
	int sub[3][3];
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	
	// adding two matrix
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("%d ",sum[k][l]);
		}
		printf("\n");
	}
	
	
	//subtracting two matrix
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			sub[i][j] = a[i][j] + b[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("%d ",sub[k][l]);
		}
		printf("\n");
	}
	return 0;
	
}
