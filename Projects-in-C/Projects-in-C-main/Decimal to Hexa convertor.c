#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int temp;
    printf("Enter decimal number: ");
    scanf("%d",&temp);
    int rem, i = 0;
    char arr[100];
    while (temp != 0)
    {
        rem = temp % 16;
        if (rem < 10)
        {
            arr[i] = 48 + rem;
        }
        else
        {
            arr[i] = 55 + rem;
        }
        temp = temp / 16;
        i++;
    }

    for (int i = strlen(arr) - 2; i >= 0; i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
