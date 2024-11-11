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
}