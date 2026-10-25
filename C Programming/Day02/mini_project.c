/*
===== SIMPLE CALCULATOR =====

Enter first number: 20
Enter operator (+, -, *, /, %): +
Enter second number: 10

Result = 30
*/
#include<stdio.h>
int main()
{
    int num1, num2;
    char operator;
    // num1 = 20;
    // num2 = 43;
    // operator = '+';
    printf("=====\tSIMPLE CALCULATOR\t=====");
    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("\nEnter operator ( + , - , * , /, %): ");
    scanf("%c",&operator);
    printf("\nEnter second number: ");
    scanf("%d",&num2);
    

    if(operator == '+')
        printf("\nResult: %d",num1 + num2);
    else if(operator == '-')
        printf("\nResult: %d",num1 - num2);
    else if(operator == '*')
        printf("\nResult: %d",num1 * num2);
    else if(operator == '/')
        printf("\nResult: %d",num1 / num2);
    else if(operator == '%')
        printf("\nResult: %d",num1 % num2);
    else
        printf("\nInvalid formate");
    printf("\nThank you");
    return 0;
}