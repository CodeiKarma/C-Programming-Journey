#include<stdio.h>
int main()
{
    int num1;
    char grade;
    printf("Enter your marks: ");
    scanf("%d",&num1);

    if(num1>=0)
    {
        if(num1>=90)
        {
            grade='A';
        }
        else if(num1>=80)
        {
            grade='B';
        }
        else if(num1>=70)
        {
            grade='C';
        }
        else if(num1>=60)
        {
            grade='D';
        }
        else
        {
            grade='F';
        }
        printf("Your grade is: %c",grade);
    }
    else
    {
        printf("Invalid input");
    }
    printf("\nThank you");
}