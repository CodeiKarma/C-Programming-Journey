/*
Number input lo.

Determine:
Even

or
Odd
*/

#include<stdio.h>
int main()
{
    int number;
    // Without condition
    printf("Enter you number: ");
    scanf("%d",&number);

    printf("\nEven if 1 out : %d",number%2==0);
    printf("\nOdd if 0 out : %d",number%2!=0);
    return 0;
}