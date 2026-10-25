#include<stdio.h>
int main()
{
    int num;
    printf("Voting eligibility chenk\n");
    printf("Enter your age:");
    scanf("%d",&num);
    
    if(num>=0)
    {
        if(num>=18)
        {
            printf("You are eligibl for vote");
        }
        else
        {
            printf("You are not eligibal for vote");
        }
    }
    else
    {
        printf("Invalide");
    }
    printf("\nThank you");
    return 0;
}