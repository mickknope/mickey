#include <stdio.h>

main () {
	int num ;
	printf("Enter number : ") ;
	scanf("%d" , &num) ;
	
	for (int i = 1 ; i < 13 ; i++) {
		int result = num * i ;
		printf("%d x %d = %d \n" , i , num , result) ;
	}
}