    // to check if the number is even or odd

#include<stdio.h>
int main()
{
    float num1, num2, result;
    printf("Welcome to the calculator.\nEnter first number:\n");
    scanf("%f", &num1);
    printf("Enter num2:\n");
    scanf("%f", &num2);
    result = num1 + num2;
    printf("The sum of %f and %f is %f.",num1,num2,result);
    return 0;
}
