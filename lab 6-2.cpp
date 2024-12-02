#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
}; 

int main() {
    struct Student st[7];

 
    FILE* file = fopen("student.txt", "w");  
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }


    for (int i = 0; i < 7; i++) {
        printf("Student Name %d: ", i + 1);
        scanf("%s", st[i].name);  

        printf("Age: ");
        scanf("%d", &st[i].age);  

        printf("Grade: ");
        scanf("%f", &st[i].grade);  
    }

  
    for (int i = 0; i < 7; i++) {
        fprintf(file, "Student %d Details:\n", i + 1);
        fprintf(file, "Name: %s\n", st[i].name);
        fprintf(file, "Age: %d\n", st[i].age);
        fprintf(file, "Grade: %.2f\n\n", st[i].grade);  
    }


    fclose(file);

   

    return 0;
}
