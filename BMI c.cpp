#include <stdio.h>

int main() 
{
    float height = 0.0; 
    float weight = 0.0; 
    float BMI = 0.0;    
    
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in m: ");
    scanf("%f", &height);
    
    BMI = weight / (height * height);
    
    printf("Your BMI is: %.2f\n", BMI); 
    
    if (BMI <= 18.5) {
        printf("Your BMI is %.2f: Underweight.\n", BMI);
    } else if (BMI <= 24.9) {
        printf("Your BMI is %.2f: Normal weight.\n", BMI);
    } else if (BMI <= 29.9) {
        printf("Your BMI is %.2f: Overweight.\n", BMI);
    } else {
        printf("Your BMI is %.2f: You should see a doctor.\n", BMI);
    }

    
}