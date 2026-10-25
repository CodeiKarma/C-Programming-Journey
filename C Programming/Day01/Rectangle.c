/*
Length aur breadth input lekar:

Area
Perimeter

calculate karo.
*/

#include<stdio.h>

int main(){
    float length= 4.5,   // Define by me if not then comment line of 13 and 14 code then and un comment 16 to 21 line all 
    breadth = 2.3;

    // float length,breadth;
    // printf("Enter you lenght: ");
    // scanf("%f\n",&length);

    // printf("Enter you breadth: ");
    // scanf("%f\n",&breadth);


    float area = length*breadth,
    perimeter = 2*(length + breadth);
    printf("Lenght = %.2f\nBreadth = %.2f\n",length,breadth);
    printf("Area of rectangle whose l (%.2f) and b (%.2f): %.2f\n",length,breadth,area);
    printf("Perimeter of rectangle whose l (%.2f) and b (%.2f): %.2f\nByy Thank you",length,breadth,perimeter);

    return 0;

}