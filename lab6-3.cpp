#include <stdio.h>
#include <string.h>

struct student {
	char name[50];
	int age;
	float grade;
};

main() {
	struct student st[7];
	
	for(int i = 0; i < 7; i++){
		printf("Student %d \n", i+1);
		printf("Name : ");
		scanf("%s" , st[i].name);
		printf("Age : ");
		scanf("%d" , &st[i].age);
		printf("Grade : ");
		scanf("%f" , &st[i].grade);
		printf("\n");
	}
	
	for(int i = 0; i < 7; i++){
		printf("%s \t", st[i].name);
		printf("%d \t", st[i].age);
		printf("%f \n", st[i].grade);
	}
	
	FILE *file = fopen("C:\\Users\\USER\\Downloads\\emb7studt.txt" , "w");
	if(file == NULL){
		printf("Can't open file");
		return 1;
	}
	
	for(int i = 0; i < 7; i++){
		fprintf(file, "%s \t" , &st[i].name);
		fprintf(file, "%d \t" , &st[i].age);
		fprintf(file, "%f \n" , &st[i].grade);
	}
}