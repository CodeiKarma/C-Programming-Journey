#include<stdio.h>
int main()
{   

    printf("Electricity Usage Category\n");
    int num;
    printf("Enter Units: ");
    scanf("%d", &num);

    if(num>=0)
    {
        if(num>0 && num<=100)
        {
            printf("Low usage");
        }
        else if(num>100 && num<300)
        {
            printf("Medium usage");
        }
        else
        {
            printf("High usage");
        }
    }
    else
    {
        printf("Invalid input");
    }
    printf("\nThank You");
}