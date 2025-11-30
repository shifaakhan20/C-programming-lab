#include<stdio.h>

/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/
int main(){
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;
    printf("\n\nAddition of two two matrices : \n\n");
    printf("\nInput the size of the square matrix : ");
    scanf("%d", &n);

    printf("\nInput elements in the first matrix : \n");
    for(i = 0; i < n; i++){
        printf("\n");
         for(j = 0; j < n; j++){
            printf("element - [%d], [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
         }
    }
    printf("\nInput elements in the second matrix : \n ");
    for(i = 0; i < n; i++){
        printf("\n");
          for(j = 0; j < n; j++){
        printf("element - [%d][%d]: ", i, j);
          scanf("%d", &brr1[i][j]);
          }
    }

    printf("\n The first matrix is : ");
    for(i = 0; i < n; i++){
        printf("\n");
          for(j = 0; j < n; j++){
            printf("%d\t", arr1[i][j]);
          }
    }

    printf("\n The second matrix is : ");
    for(i = 0; i < n; i++){
        printf("\n");
          for(j = 0; j < n; j++){
            printf("%d\t", brr1[i][j]);
          }
    }

    for(i = 0; i < n; i++){
        printf("\n");
          for(j = 0; j < n; j++){
            crr1[i][j] = arr1[i][j] + brr1[i][j];
          }
    }

    printf("The addition of the two matrices is :  \n");
    for(i = 0; i < n; i++){
        printf("\n");
          for(j = 0; j < n; j++){
            printf("%d\t", crr1[i][j]);
          }
    }
          
    return 0;
}