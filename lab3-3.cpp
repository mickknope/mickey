#include <stdio.h>
#include <string.h>

main () {
	char usnadmin[9] = "admin" , usnenter[10] ;
	int pwadmin = 1234 , pwenter ;
	printf("Enter username : \n") ;
	scanf("%s" , &usnenter) ;
	
	if (strcmp(usnadmin , usnenter) == 0) {
		printf("Enter password : \n") ;
		
	} else {
		printf("This account is not available") ;
		return(0) ;
	}
	
	scanf("%d" , &pwenter) ;
	
	if (pwadmin == pwenter) {
		printf("\n PASS") ;
		
	} else {
		printf("\n ERROR") ;
	}

}