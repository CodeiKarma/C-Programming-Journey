/*
Two numbers input lo.

Example:
Input:
25 18

Output:
25 is larger

Extra challenge:
Agar dono equal hon to:
Both numbers are equal

print karo.
*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter of a vaue: ");
    scanf("%d\n",&a);
    printf("Enter of b vaue: ");
    scanf("%d",&b);

    printf("Large of two value is: %d\n",a>b?a:b);
    printf("\nThank you ");
    return 0;
}