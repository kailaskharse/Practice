#include<stdio.h>
#include<string.h>

void display( char*, int ,int);
void displayi_ref(char**, int *, int *);

struct student{
	char name[10];
	int roll;
	int marks;
};

int main(){
	struct student stu1={"john",10,88};
	struct student stu2;
	strcpy(stu2.name,"smith");
	stu2.roll=11;
	stu2.marks=94;
	display(stu1.name,stu1.roll,stu1.marks);
	display(&stu2.name,&stu2.roll,&stu2.marks);
	return 0;
}

void display( char *name,int roll, int marks){
	printf("name=%s ,roll=%d, marks=%d\n\n",name,roll,marks);
}

void display_ref(char**name, int *roll, int* marks){
	printf("name=%s, roll=%d, marks=%d\n\n",*name, *roll, *marks);
}
