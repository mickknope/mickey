#include <stdio.h>

main() {
	float w, h, bmi;
	printf("BMI calculator \n \n");
	printf("Enter your weight : ");
	scanf("%f", &w);
	printf("\nEnter your height (meters) : ");
	scanf("%f", &h);
	bmi = w/(h*h);
	printf("\nYour BMI is %.2f", bmi);
	
	if (bmi < 18.5) {
		printf("\n\nyou are underweight.") ;
		
	} else if (bmi >= 18.5 && bmi < 24.9) {
		printf("\n\nYou are normal.") ;
		
	} else if (bmi > 25 && bmi < 29.9) {
		printf("\n\nYou are fat, please go on a diet.") ;
		
	} else if (bmi > 30) {
		printf("\n\nYou are obese, please consult a doctor.") ;
		
	}
}