#include<stdio.h>
int main()
{
    // storing inputs in an array
    int arr[6] = {1,2,3,4,5,6,7};
    int ii;
    printf("Enter the input:\n");
    for(ii=0;ii<=6;ii++);
    {
        scanf("%d",&arr[ii]);
    }
  
    // printing the elements in the array 
    printf("The elements in the array are:\n");
    for(ii=0;ii<=6;ii++);
    {
        printf("%d, ",arr[ii]);
    }
  
    // adding the elements of an array
    int sum = 0;
    for(ii=0;ii<=6;ii++);
    {
        sum += arr[ii];
    }
    printf("The sum of the array is: %d", sum);
  
    // printing array elements in reverse order
    for(ii=6;i>=0;i--)
    {
        printf("%d",arr[ii]);
    }
  return 0;
}
