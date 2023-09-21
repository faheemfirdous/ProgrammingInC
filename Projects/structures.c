#include<stdio.h>
struct CSE
{
    int roll;
    int marks;
    char name[30];
};

int main()
{
    int n;
    printf(" How many students are in class?: ");
	scanf("%d", &n);
    struct CSE s[n];
    int i,max=0,topper,j;
    printf("Enter the roll number,name and marks:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d %s %d\n",&s[i].roll,&s[i].name,&s[i].marks);
    }

// printing a structure
    printf("The given detials of the students are:"); 
    for(j=0;j<5;j++)
    {
        printf("\n%d\t%s\t%d",s[j].roll,s[j].name,s[j].marks);
    }
    topper = s[0].marks
//to find out topper of the class
    for(j=0;j<5;j++)
    {
        if(s[j].marks>topper)
        {
            topper = s[j].marks;
            max =j+1;
        }
    }
    printf("\nThe topper of the class is %s bearing roll number %d and his marks are %d",s[max].name,s[max].roll,s[max].marks);

//searching for an entery in structures
    char search;
    printf("Enter the name of student you want to search: ");
    scanf("%s",&search);
    for(j=0;j<5;j++)
    {
        if(search == s[j].name)
        {
            printf("The student %s is in the data base and has roll number:  and marks:",s[j].name,s[j].roll,s[j].marks);
        }
        else
        {
            printf("The student is not in the data base");
        }
    }
    
}