/*Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    printf("Enter the Basic salary:\n");
    float GrossSalary;
    int salary;
    scanf("%d",&salary);
    GrossSalary = salary + salary*0.6;
    printf("The gross income is: %f", GrossSalary);
    return 0;    
}
