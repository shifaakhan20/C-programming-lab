#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/

int IsPrimeNumber(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int start_num, end_num, i;
    printf("\t\t\t***Prime Number Finder***\n\n");
    printf("Enter starting number: ");
    scanf("%d", &start_num);
    printf("Enter ending number = ");
    scanf("%d", &end_num);

    i = start_num <= 1?2 : start_num;
    printf("Prime Numbers between %d and %d = ", start_num, end_num);
    while(i <= end_num){
        if(IsPrimeNumber(i)){
            printf("%d", i);
        }
        i++;
    }
    return 0;
}

