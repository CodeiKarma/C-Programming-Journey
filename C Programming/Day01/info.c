/*Student Introduction
Apna:

Name
Age
Branch
College

*/
#include<stdio.h>

int mani(){
    char Name,Age,Branch,College;
    printf("Name\n:");
    scanf("%c",&Name);
    printf("Age\n:");
    scanf("%c",&Age);
    printf("Branch\n:");
    scanf("%c",Branch);
    printf("Collage:");
    scanf("%c",&College);

    printf("Name: %c\n Age: %c\n Branch:%c\n College: %c",Name,Age,Branch,College);
    return 0;

}