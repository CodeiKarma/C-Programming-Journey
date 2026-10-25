#include<stdio.h>
int main()
{
    int a,b,temp;
    a = 45;
    b = 54;
    // printf("Enter value of a: ");
    // scanf("%d",&a);
    // printf("\nEnter value of b: ");
    // scanf("%d",&b);

    printf("\nBefore swapping of a and b is: %d %d ",a,b);
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping of a and b is: %d %d ",a,b);
    
    return 0;
}