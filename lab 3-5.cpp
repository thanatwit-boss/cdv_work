#include <stdio.h>

int main(){
	int score = 0;
	int jit = 0;
	int misterm = 0;
	int final = 0;
	printf("Enter score ");
	scanf("%d", &score);
		printf("Enter jit ");
	scanf("%d", &jit);
		printf("Enter misterm ");
	scanf("%d", &misterm);
		printf("Enter final ");
	scanf("%d", &final);
	
int totalScore = score + jit + misterm + final;

  
    printf("Your total score is: %d\n", totalScore);
   

}