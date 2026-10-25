#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter of a vaue: ");
    scanf("%d\n",&a);
    printf("Enter of b vaue: ");
    scanf("%d\n",&b);

    printf("Smallest of two number: %d",a<b?a:b);
    return 0;
}