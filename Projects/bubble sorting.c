#include<stdio.h>
int main()
{
    // sorting an array(bubble sort)
    int temp,i,ii,j;
    int ar[10] = {32,23,1,43,24,34,55,33,76,79};
    for(j=0;j<9;j++)
    {
        for(i=0;i<10;i++)
        {
            if(ar[i] > ar[i+1])
            {
                temp = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = temp;
            }
        }
    }
    for(ii=0;ii<10;ii++)
    {
        printf("%d ",ar[ii]);
    }
return 0;
}
