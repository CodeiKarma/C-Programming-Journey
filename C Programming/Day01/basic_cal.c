/*
Take two numbers input:

Addition
Subtraction
Multiplication
Division
*/

#include<stdio.h>
int main(){
    float a = 4.0,b = 5.0; // you take value from user then comment this line of code

    //if you take input from user then or user define
    // use scanf fuction

    /*
    float a,b;
    printf("Enter a: ");
    scanf("%f\n",&a);
    printf("Enter b: ");
    scanf("%f\n",&b);
    */

    printf("Addition of %.2f + %.2f:= %.2f\n",a,b,a+b);
    printf("Subtraction of %.2f - %.2f:= %.2f\n",a,b,a-b);
    printf("Multipication of %.2f * %.2f:= %.2f\n",a,b,a*b);
    printf("Division of %.2f - %.2f:= %.2f\n",a,b,a/b);
    printf("Thank you\n Byy...");
    return 0; 
}