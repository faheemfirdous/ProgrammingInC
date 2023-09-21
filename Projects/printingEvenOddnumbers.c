// printing all the even odd numbers to N

#include<stdio.h>
int main(){
  int e,f;
  scanf("%d",&e);
  printf("Odd number upto %d are:\n", e);
  for (f=1;f<=e;f+=2)
  {
      printf("%d\n",f);
  }
  printf("Even numbers upto %d are:\n", e);
  for (f=0;f<=e;f+=2)
  {
      printf("%d\n",f);
  }
  return 0;
}
