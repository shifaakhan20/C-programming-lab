#include<stdio.h>

/*Name= Shifaa
 Age= 18
 Class comps
 Division= C
 UIN 251P022*/
 
int main () {

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
            printf("The number is even");
    } else {
       printf("The number is odd");
      }
    return 0;
}