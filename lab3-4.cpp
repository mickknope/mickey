#include <stdio.h>
#include <string.h>

void abc(void) ;
void square(float W , float L) ;
float circle (int r) ;

main() {
	st :
	int r ;
	//abc();
	//square(5,20) ;
	//square(5,2) ;
	printf("Enter radius : ") ;
	scanf("%d" , &r) ;
	printf("circle area = %.2f cm^2 \n \n" , circle(r)) ;
	goto st ;
}

void abc(void) {
	printf ("Hello world \n") ;
	
}

void square(float W , float L) {
	float ans = W*L ;
	printf("Answer = %.2f cm^2 \n" , ans) ;
}

float circle (int r) {
	float c = 3.14*r*r ;
	return c;
}