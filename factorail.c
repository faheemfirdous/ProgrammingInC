#include<stdio.h>
int main()
{
      // finding factorial of any number
    int k, fact=1, number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    for(k=1; k<= number; k++)
    {
        fact = fact * k;
    }
    printf("The factorial of %d is %d",number, fact);
  return 0;
}
