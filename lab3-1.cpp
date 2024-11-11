#include <stdio.h>
#include <string.h>

main() {
	char str1[30] = "My birthday" ;
	char str2[30] = "18 august 1991" ;
	char str3[30] ;
	strcpy (str3 , str1) ;
	strcat (str1 , str2) ;
	printf("str1 = %s \n" , str1) ;
	printf("str3 = %s \n" , str3) ;
}