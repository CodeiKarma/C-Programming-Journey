/*
Two integers input lo aur print karo:
Sum
Difference
Product
Quotient
Remainder
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter you int of a value: ");
    scanf("%d\n",&a);
    printf("Enter you int of b value: ");
    scanf("%d",&b);
    int sum = a + b,diff = a - b,product = a*b, quoti = a/b, remainder = a%b;
    printf("The sum of %d and %d: %d\n",a,b,sum);
    printf("The Diffrence of %d and %d: %d\n",a,b,diff);
    printf("The product of %d and %d: %d\n",a,b,product);
    printf("The Quotient of %d and %d: %d\n",a,b,quoti);
    printf("The Remainder of %d and %d: %d\n Good byy /n Thank you",a,b,remainder);
    return 0;
}