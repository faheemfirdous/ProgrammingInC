// sum of fibonacci series using recursive functions
#include<stdio.h>
int fibo(int);
int main()
{
	int nn, ans;
	printf("Enter the number: ");
	scanf("%d",&nn);
	ans = fibo(nn);
    printf("%d",ans);
}
int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return(n);
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}
