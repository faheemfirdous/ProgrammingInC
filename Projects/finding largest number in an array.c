#include<stdio.h>
int main()
{
    //finding the largest element in an array
    int lar =0;
    int ar[10] = {32,23,1,43,24,34,55,33,76,79};
    for(int i=0;i<10;i++)
    {
        if(ar[i]>lar)
        {
            lar = ar[i];
        }
    }
    printf("The greatest number in the array is: %d", lar);
  return 0;
}
