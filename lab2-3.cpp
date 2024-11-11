#include <stdio.h>

main(){
	int menu ;
	printf("--------- Menu --------- \n") ;
	printf("1. Pepsi	20 bath\n") ;
	printf("2. Fanta	15 bath\n") ;
	printf("3. Singcha	65 bath\n") ;
	printf("4. Heinaken	75 bath\n") ;
	printf("5. Red wine	200 bath\n") ;
	printf("-------------------------\n") ;
	printf("Select menu : ") ;
	scanf("%d" , &menu) ;
	
	switch (menu){
		case 1 : printf("Pepsi");
			break;
		case 2 : printf("Fanta");
			break;
		case 3 : printf("Singcha");
			break;
		case 4 : printf("Heinaken");
			break;
		case 5 : printf("Red wine");
			break;
		default :
			return 0 ;
			break ;
	}
	
}