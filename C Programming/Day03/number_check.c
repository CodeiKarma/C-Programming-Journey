#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    if(number>0)
    {
        printf("Positive");
    }
    else if(number<0)
    {
        printf("Negative");
    }
    else
        printf("Zero");
    printf("\nThank you");
    return 0;
}