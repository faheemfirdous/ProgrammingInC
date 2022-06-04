// finding the greatest integer 
#include<stdio.h>
int main(){
  int g,h,i;
  printf("Enter 3 numbers:\n");
  scanf("%d\n %d \n%d", &g, &h, &i);
  if (g == h && g > i)
  {
      printf("%d and %d are equal and greater than %d.", g,h,i);
  }
  else if (g == i && g > h)
  {
      printf("%d and %d are equal and greater than %d.", g,i,h);
  }
  else if (i == h && i > g)
  {
      printf("%d and %d are equal and greater than %d.", i,h,g);
  }
  else if (g > h && g > i)
  {
      printf("%d is the greatest numnber than %d and %d.", g, h,i);
  }
  else if (h > g && h > i)
  {
      printf("%d is the greatest number than %d and %d.", h,g,i);
  }
  else
  {
      printf("%d is the greatest number than %d and %d.", i,g,h);

  }
  return 0;
}
