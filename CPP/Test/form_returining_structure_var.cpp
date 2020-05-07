#include<iostream>
#include<cstdlib>

using namespace std;

struct A{
	int x;
	int y;
	int z;
};

struct A* D(int x, int y, int z){
	struct A* c=(struct A*)malloc(sizeof(struct A));
//	struct A* c;
	(*c).x=x*y;
	(*c).y=y*z;
	(*c).z=x*z;
	return c;
}

int main(){
	int a=2,b=3,c=4;
	struct A* e;
//	struct A* e=(struct A*)malloc(sizeof(struct A));
	e=D(a,b,c);
	std::cout<<"x="<<(*e).x<<"y="<<(*e).y<<"z="<<(*e).z;

}	
