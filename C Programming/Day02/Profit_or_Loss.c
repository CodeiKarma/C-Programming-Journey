/*
Input:
Cost Price
Selling Price

Determine:
Profit
Loss
No Profit No Loss
*/

#include <stdio.h>

int main() {
    int cost_price, selling_price;

    printf("Enter Cost Price: ");
    scanf("%d", &cost_price);

    printf("Enter Selling Price: ");
    scanf("%d", &selling_price);

    if (selling_price > cost_price) {
        int profit = selling_price - cost_price;
        printf("Profit: %d\n", profit);
    } 
    else if (cost_price > selling_price) {
        int loss = cost_price - selling_price;
        printf("Loss: %d\n", loss);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
