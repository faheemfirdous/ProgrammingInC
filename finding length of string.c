#include<stdio.h>
int main()
{
  char arr[100],i=0,n;
	printf("Enter your first name: ");
	scanf("%s",&arr);
	while(arr[i] != '\0')
	{
		i ++;
	}
	n=i;
	printf("The length of your name is %d.\n",i);
	//to reverse the name
    for(i=n-1;i>=0;i--)
    {
    	printf("%c",arr[i]);
    }

	return 0;
}
