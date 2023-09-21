#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Enter the coefficients of quadratic equation:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d>0)
    {
        r1 = (-b + sqrt(d))/2*a;
        r2 = (-b - sqrt(d))/2*a;
        printf("The roots of the quadradic equation %dx^2 + %dx + %d are: %d %d.", a,b,c,r1,r2);
    }
    else if(d==0)
    {
        r1 = (-b + sqrt(d))/2*a;
        printf("The quadratic equation %dx^2 + %dx + %d have two eqaual roots: %d.", a,b,c,r1);
    }
    else
    {
        printf("The quadratic equation %dx^2 + %dx + %d have no real roots.",a,b,c);
    }
    return 0;
}
