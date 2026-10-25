#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0)
    {
        if(num%5==0 && num%11==0)
        {
            printf("Divisible by both 5 and 11");
        }
        else if(num%5==0)
        {
            printf("Divisible by 5");
        }
        else if(num%11==0)
        {
            printf("Divisible by 11");
        }
        else
        {
            printf("Not divisible by both 5 and 11");
        }
    }
    else
    {
        printf("Invalid input");
    }
    printf("\nThank you");
    return 0;
}