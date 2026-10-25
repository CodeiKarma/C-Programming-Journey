/*Do integers input lo aur unka:

Sum
Difference
Product
*/

#include<stdio.h>

int main(){
    // Predefine
    int a,b;
    printf("Enter int value of a: ");
    scanf("%d\n",&a);
    printf("Enter int value of b: ");
    scanf("%d",&b);

    printf("Sum of %d + %d : %d\n",a,b,a+b);
    printf("Difference of %d - %d : %d\n",a,b,a-b);
    printf("Product of %d * %d: %d\n",a,b,a*b);
    printf("Thank You\n Byy..");
    return 0;
}