#include <stdio.h>

int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    printf("Score = %d\n", score);

    if (score >= 80 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 70 && score < 80) {
        printf("Grade B\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade C\n");
    } else if (score >= 50 && score < 60) {
        printf("Grade D\n");
    } else if (score >= 0 && score < 50) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }

   
}