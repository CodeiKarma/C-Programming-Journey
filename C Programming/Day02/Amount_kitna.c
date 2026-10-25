/*
User ke paas ₹1000 hain.

Ek item ki price input lo.

Calculate:
Remaining money
*/

#include<stdio.h>
int main()
{
    int price;
    printf("Enter your price: ");
    scanf("%d",&price);
    prinft("\nRemaining money is: %d",1000-price);
    printf("\nThank you for shoppinng with us");
    return 0;
}