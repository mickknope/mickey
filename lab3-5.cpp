#include <stdio.h>
#include <string.h>

int score(int s1 , int s2 , int s3 , int s4) ;
char grade(int score) ;

main () {
	int sc1 , sc2 , sc3 , sc4 ;
	printf("Enter your accumulated score : ") ;
	scanf("%d", &sc1) ;
	printf("Enter your affective score : ") ;
	scanf("%d", &sc2) ;
	printf("Enter your midterm score : ") ;
	scanf("%d", &sc3) ;
	printf("Enter your final score : ") ;
	scanf("%d", &sc4) ;
	printf("Your grade is %c" , grade(score(sc1 ,sc2 , sc3 , sc4))) ;
	
}

int score(int s1 , int s2 , int s3 , int s4) {
	int total = s1 + s2 + s3 + s4 ;
	return(total) ;
	
}

char grade(int score) {
	if (score >= 80 && score <= 100) {
		return('A') ;
	} else if (score >= 70 && score <= 79) {
		return('B') ;
	} else if (score >= 60 && score <= 69) {
		return('c') ;
	} else if (score >= 50 && score <= 59) {
		return('d') ;
	} else if (score >= 0 && score <= 49) {
		return('D') ;
	} else {
		return('?') ;
	}
}