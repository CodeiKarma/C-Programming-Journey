/*
There are many methode to swap the value 
1.temp 
2.bitwise
3.swap function
*/
// use  only temp methode

#include<stdio.h>

int main(){
    float a = 10, b = 20;
    printf("Value Before swap\na = %.2f\nb = %.2f\n",a,b);

    float temp = a;
    a = b;
    b = temp;

    printf("Value After swap\na = %.2f\nb = %.2f\n",a,b);
    printf("Byy Thank you");
    return 0;
}