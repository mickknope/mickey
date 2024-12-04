#include <stdio.h>
#include <string.h>

struct student {
	char name[50];
	int age;
	float grade;
};

main() {
	struct student st1;
	struct student st2;
	
	strcpy(st1.name, "Mickey");
	st1.age = 16;
	st1.grade = 4;
	
	strcpy(st2.name, "babyboss");
	st2.age = 16;
	st2.grade = 4;
	
	printf("Name : %s \n", st1.name);
	printf("Age : %d \n", st1.age);
	printf("Grade : %.2f \n\n", st1.grade);
	
	printf("Name : %s \n", st2.name);
	printf("Age : %d \n", st2.age);
	printf("Grade : %.2f \n", st2.grade); 
}