#include<stdio.>
int main()
{
    int search,i,flagg=0;
    printf("Enter the number you want to search in the array: \n");
    scanf("%d",&search);
    for(i=0;i<10;i++)
    {
        if(search == ar[i])
        {
            flagg += 1;
            break;
        }
    }
    if(flagg == 1)
        {
            printf("The number is in the array at %dth place.",++i);
        }
        else
        {
            printf("The number is not in the array.");
        }
return 0;
  ]
