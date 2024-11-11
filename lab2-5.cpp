#include <stdio.h>

main () {
	int num , i , result ;
	printf("Enter number : ") ;
	scanf("%d" , &num) ;
	
	//while (i < 12) {
	//	i++ ;
	//	result = i * num ;
	//	printf("%d x %d = %d \n" , i , num , result) ;
	//}
	
	do {
		i++ ;
		result = i * num ;
		printf("%d x %d = %d \n" , i , num , result) ;
	}
	while (i < 12) ;
}