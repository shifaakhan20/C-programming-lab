#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/
int FactorialIterative(int num) {
    int prod = 1;
    for(int i = 1; i <= num; i++){
        prod *= i; 
    }
    return prod;
}

int main(){
    int num;
    printf("\t\t\t****Iterative Factorial Function****\n\n");
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, FactorialIterative(num));
    return 0;
}