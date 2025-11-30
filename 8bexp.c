#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/

int main(){
    char str[100];
    int i;
    printf("\t\t\t****Pallindrome Finder****\n\n\n");

    printf("\n Enter Your string: ");
    gets(str);
     
for(i = 0; i < strlen(str) - 1; i++){
    if(str[i] != str[strlen(str) - 1 - i]){
        printf("The string is NOT  a pallindrome");
        return 0;
    }
}
printf("\n The string is a Pallindrome");

return 0;
}