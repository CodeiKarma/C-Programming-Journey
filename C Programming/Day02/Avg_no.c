/*
Average of Three Numbers
Three numbers input lekar average calculate karo.
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter you int of a value: ");
    scanf("%d\n,&a");
    printf("Enter you int of b value: ");
    scanf("%d\n",&b);
    printf("Enter you int of c value: ");
    scanf("%d\n",&c);

    int avg = a+b+c/3;
    printf("The average of %d, %d and %d: %d\nThank you",a,b,c,avg);
    return 0;
}