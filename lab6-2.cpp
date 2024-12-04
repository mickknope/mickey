#include <stdio.h>
#include <string.h>

struct student {
	char name[50];
	int age;
	float grade;
};

main() {
	struct student st[2];
	
	strcpy(st[0].name, "Mickey");
	st[0].age = 16;
	st[0].grade = 4;
	
	strcpy(st[1].name, "babyboss");
	st[1].age = 16;
	st[1].grade = 4;
	
	for (int i = 0; i < 2; i++){
		printf("Student %d\n", i+1);
		printf("Name : %s \n", st[i].name);
		printf("Age : %d \n", st[i].age);
		printf("Grade : %.2f \n\n", st[1].grade);
	}
}