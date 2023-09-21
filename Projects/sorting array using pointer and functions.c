// sorting an array using pointer and functions
#include<stdio.h>
void sort(int*);
int main()
{
    int arr[10] = {33,11,2,64,63,34,32};
    sort(&arr[0]);
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sort(int *p)
{
    int i,j,temp, *q;
    q=p;
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            p=q;
            if(*p > *(p+1))
            {
                temp = *p;
                *p = *(p+1);
                *(p+1) = temp;
                p++;
            }
        }
    }
}
