#include <stdio.h>
#include <string.h>
struct Student{
	char name[50];
	int age;
	float grade;
};
int main(){
	struct Student student1;
	struct Student student2;
	strcpy(student1.name,"sebast is gay");
	strcpy(student2.name,"Boss");
	student1.age = 15;
	student2.age = 15;
	student1.grade = 1;
	student2.grade = 4;
	printf("Name: %s\n",student1.name);
	printf("Age: %d\n",student1.age);
	printf("Grade: %f\n",student1.grade);
	printf("-------------------------");
	printf("Name: %s\n",student2.name);
	printf("Age: %d\n",student2.age);
	printf("Grade: %f\n",student2.grade);
	return 0;
}