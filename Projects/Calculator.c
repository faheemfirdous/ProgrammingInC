#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    float result;
    printf("Welcome to the Faheem's Calculator!!!!\nSum-> +\nSubtract -> -\nMultiplication -> *\nDivide -> /n Modulus -> $\n");
    printf("Enter 2 numbers:\n");
    scanf("%d\n%d",&num1,&num2);
    // printf("Enter second number:\n");
    // scanf("%d",&num2);
    printf("What operation you want to perform:\n");
    scanf("%s",&operator);
    if (operator=='+') // sum
    {
        result=num1+num2;
        printf("The sum of %d and %d is %f.", num1, num2,result);
    }
    else if (operator=='-') // subtract
        {
            result=num1-num2;
            printf("The difference of %d and %d is %f.", num1, num2,result);
        }
    else if (operator== '*') // multiplication
        {
            result=num1*num2;
            printf("The multiplication of %d and %d is %f.", num1, num2,result);
        }
    else if (operator=='/') // divide
        {
            result=num1/num2;
            printf("The division of %d and %d is %f.", num1, num2,result);
        }
    else if(operator=='$') // modulus
        {
            result=num1%num2;
            printf("The modulus of %d and %d is %f.", num1, num2,result);
        }
                
    return 0;
}
