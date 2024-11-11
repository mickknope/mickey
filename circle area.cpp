#include <stdio.h>
const float pi = 3.14 ;

main(){
	float r , area ;
	printf("Circle area calculator \n \n") ;
	printf("Enter radius : " ) ;
	scanf("%f" , &r) ;
	area = pi*r*r ;
	printf("\narea = %.2f cm^2" , area) ;
}