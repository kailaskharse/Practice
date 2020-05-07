#include<iostream>

using namespace std;

struct student {
	int rollNumber;
	char name[50];
	int year;
	char division;
};

struct marks{
	int rollNumber;
	int marksPhysics;
	int marksChemistry;
	int marksMaths;
};

int main(){
	marks m[10];
	student s[10] ={1,"goyal",3,'A'};	//Statement 1
	int counter;
#if 0	
	for(counter=0; counter<9; counter++){
		s[counter+1]=s[counter];		//statment 2
	}
#endif	
	for(counter=0;counter<10; counter++){
		m[counter].rollNumber = counter;
		m[counter].marksPhysics = counter+10;
		m[counter].marksChemistry = counter+20;
		m[counter].marksMaths = counter+30;
	}

	cout<<m[9].rollNumber << ", "<<m[9].marksPhysics <<", " \
		<<m[9].marksChemistry<<", "<<m[9].marksMaths; 		//statment3
	
	return 0;
} 

