#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/
void counter() {
    static int count = 0;
    count++;
    printf("Counter Function Call : %d\n", count);
}

int main(){
    printf("\t\t\t****Storage Class****\n\n");
    for(int i = 1; i <= 7; i++){
        counter();
    }
    
    return 0;
}