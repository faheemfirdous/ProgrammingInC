// grading marks
#include<stdio.h>
int main(){
  int j;
  printf("Enter your marks: ");
  scanf("%d", &j);
  if (j<40)
  {
      printf("You have failed the exam:(");
  }
  else if(j>= 40 && j<= 59)
  {
      printf("You got B grade.");
  }
  else if(j>=60 && j<=79)
  {
      printf("You got A grade.");
  }
  else if (j>=80 && j<= 100)
  {
      printf("You got A+ grade:)");
  }
  else if(j<0 && j>100)
  {
      printf("Invalid input");
  }
  return 0;
}
