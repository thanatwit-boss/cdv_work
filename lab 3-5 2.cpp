#include <stdio.h>


int total(int s, int j, int m, int f);
char grade(int totalScore);

int main(void) {
    int s, j, m, f;

   
    printf("Enter score for s: ");
    scanf("%d", &s);
    printf("Enter score for j: ");
    scanf("%d", &j);
    printf("Enter score for m: ");
    scanf("%d", &m);
    printf("Enter score for f: ");
    scanf("%d", &f);

   
    int totalScore = total(s, j, m, f);
    printf("Total score is: %d\n", totalScore);

    
    char assignedGrade = grade(totalScore);
    printf("Your grade is: %c\n", assignedGrade);

    return 0; 
}


int total(int s, int j, int m, int f) {
    return s + j + m + f; 
}


char grade(int totalScore) {
    if (totalScore >= 90) {
        return 'A';
    } else if (totalScore >= 80) {
        return 'B';
    } else if (totalScore >= 70) {
        return 'C';
    } else if (totalScore >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}