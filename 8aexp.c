#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/

int main(){
    char str[100];
    int length = 0;
    printf("\t\t****String Length Finder****\n\n\n");
    printf("Enter your string: ");
    gets(str);

    while(str[length] != '\0'){
        length++;
    }

    printf("string length: %d Characters", length);
    
    return 0;
}