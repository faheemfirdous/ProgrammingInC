// how to print all prime numbers upto l
#include<stdio.h>
int main()
{
    int l,m,n;
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&l);
    printf("Prime numbers are:-\n");    
    for(m=2;m<=l;m++)
    {
        int o=0;
        for(n=1;n<=m;n++)
        {
            if(m%n==0)
            {
                o++;
            }
        }
         
       if(o==2)
        {
            printf("%d ",m);
        }
    }
  return 0;
}
