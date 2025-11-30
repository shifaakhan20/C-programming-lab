#include <stdio.h>
#include <stdlib.h> 
/*Name: Shifaa
  Roll No: 21
  UIN: 251P022
  Div: C
*/

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *fptr; 
    struct Employee emp; 

    
    fptr = fopen("employees.dat", "wb");

   
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1); 
    }

    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    
    while (getchar() != '\n'); 
    fgets(emp.name, sizeof(emp.name), stdin);

    
    for (int i = 0; emp.name[i] != '\0'; i++) {
        if (emp.name[i] == '\n') {
            emp.name[i] = '\0';
            break;
        }
    }

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    
    fwrite(&emp, sizeof(struct Employee), 1, fptr);

    printf("Employee details saved to file successfully.\n");

    fclose(fptr);

    return 0;
}