#include <stdio.h>
/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int *ptr = arr; 

    printf("Original array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    printf("Array elements in reverse order: ");
    
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    return 0;
}