/*
5 subjects ke marks input lo aur calculate karo:

Total
Average
*/

#include<stdio.h>

int  main(){
    float sub1 = 56.9,
    sub2 = 45.3,
    sub3 = 76.0,
    sub4 = 33.6,
    sub5 = 67.8;

    float   total = sub1 + sub2+ sub3+ sub4+ sub5,
    avg = total/5;
    printf("Total subject marks is : %.2f\n",total);
    printf("Average subject marks is : %.2f\n",avg);
    printf("Thank you\n Byyy..");

    
    return 0;
}