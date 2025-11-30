#include <stdio.h>
#include <string.h>

// Define the structure student_record
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    // Declare an array of student_record to store data for 5 students
    struct student_record students[5];
    int i;

    // Read data for 5 students from the user
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name); // Reads a single word for name
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter Total Marks: ");
        scanf("%f", &students[i].total_marks);
    }

    // Find the topper
    int topper_index = 0;
    for (i = 1; i < 5; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }

    // Display the topper's information
    printf("\n--- Topper Information ---\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}