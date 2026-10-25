#include<stdio.h>
int main()
{
    int a,b;
    a = 67;
    b = 33;
    //method 1
    printf("The largest value is %d and %d is : %d",a,b,a>b?a:b);
    
    // Method 2
    // if (a>b)
    // {
    //     printf("The largest number is: %d", a);
    // }
    // else
    // {
    //     printf("The largest number is: %d", b);
    // }
    return 0;
}