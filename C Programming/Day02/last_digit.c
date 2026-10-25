#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("\nThe lastdigit of your number %d: %d\nThank you ",a,a%10);
    return 0;
}