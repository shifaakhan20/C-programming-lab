#include<stdio.h>

int main() {
/*
Name: Shifaa
age: 18
Class: comps 01
Division: C
UIN: 251P022
*/

float phy, chem, math, avg;

printf("Enter your physics score: ");
scanf("%f", &phy);

printf("Enter your chemistry score: ");
scanf("%f", &chem);

printf("Enter your math score: ");
scanf("%f", &math);

avg = (phy + chem + math) / 3;

printf("\nAverage marks = %f\n", avg);

(avg >= 50) ? printf("Eligible for admission.\n") : printf("Not eligible for admission.\n");


return 0;
}