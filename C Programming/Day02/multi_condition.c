#include<stdio.h>
int main()
{
    int a,b,c;
    a = 34, b = 33, c = 77;
    printf("The large number is: %d", (a > b && a > c) ? a : (b > c ? b : c));
    printf("\nThe small number is: %d", (a < b && a < c) ? a : (b < c ? b : c));
    return 0;
}