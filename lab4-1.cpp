#include <stdio.h>

int binary(int dec);
int octa(int dec);
int hexa(int dec);

main() {
	int num;
	printf("Enter your number : ");
	scanf("%d", &num);
	binary(num);
	octa(num);
	hexa(num);
}

int binary(int dec) {
	int bin[100];
    int i=0, j;

    do{
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }while(dec > 0);
 
    printf("\nBinary value : ");
     
    for(j = i - 1; j >= 0; j--){
        printf("%d", bin[j]);   
    }return 0;
}

int octa(int dec) {
	int octal[100];
    int i=0, j;

    do{
        octal[i] = dec % 8;
        dec /= 8;
        i++;    
    }while(dec > 0);
     
    printf("\nOcta value : ");
     
    for(j = i - 1; j >= 0; j--){
        printf("%d", octal[j]); 
    }return 0;
}

int hexa(int dec) {
	int hex[100];
    int i=0, j;
     
    do{
        hex[i] = dec % 16;
        dec /= 16;
        i++;    
    }while(dec > 0);
 
    printf("\nHexa value : ");
     
    for(j = i - 1; j >= 0; j--){
        switch(hex[j]){
            case 15 : printf("F"); break;
            case 14 : printf("E"); break;
            case 13 : printf("D"); break;
            case 12 : printf("C"); break;
            case 11 : printf("B"); break;
            case 10 : printf("A"); break;
            default : printf("%d", hex[j]);
        }   
    }return 0;
}