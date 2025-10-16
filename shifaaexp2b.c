#include <stdio.h>

/*
name= Shifaa Khan
UIN- 251P022
class Computer
division= C
*/

int main() {
    int start, end, sum = 0;
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start > end){
        int temp = start;
        start = end;
        end = temp;
    }
    for (int i = start + 1; i < end; i++) {
        if (i % 2 != 0) {
            sum += 1;
        }
    }
    printf("Sum of odd numbers between &d and d is %d\n", start, end, sum);

    return 0;
}