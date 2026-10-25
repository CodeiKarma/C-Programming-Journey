/*
Simple Interest

Input:

Principal
Rate
Time

*/

#include<stdio.h>

int main(){
    float principal_amount = 4000,
    interrest_rate = 5.2;
    int time = 365;

    float SI = SI = (principal_amount * interrest_rate * time) / 100.0;
    printf("Amount = %f\nRate of interrest = %.2f\nTime = %d\n",principal_amount,interrest_rate,time);
    printf("Final Amount after %d days after: %.4f\nByy thank you",time,SI);
    return 0;
}