#include<stdio.h>
int main()
{
    int m1,m2,m3;
    m1 = 45;
    m2 = 66;
    m3 = 89;
    // printf("Enter your first subject marks: ");
    // scanf("%d",&m1);
    // printf("\nEnter your second subject marks: ");
    // scanf("%d",&m2);
    // printf("\nEnter your third subject marks: ");
    // scanf("%d",&m3);
    printf("\nThe total marks of all sunbject is : %d", 300);
    printf("\nThe Average marks of sunbject is : %.2f", (float)(m1 + m2 + m3 )/3);
    printf("\nThe percentage of the student is: %.2f%%", (float)(m1 + m2 + m3) / 3);
    return 0;
}