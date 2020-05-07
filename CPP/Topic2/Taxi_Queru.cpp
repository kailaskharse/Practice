#include<iostream>

using namespace std;

struct Driver {string name; int id;};
struct LinkedTaxi {int id; Driver *drv; LinkedTaxi *next;};
struct Queue { LinkedTaxi *front, *end; int numTaxis;};

int main(){
	Queue q;
	q.front=NULL; q.end=NULL; q.numTaxis=0;
	while(true){
		cout<<"Command: 'j' to join queue, 'd' to dsplatch, 'x' to exit"<<endl;
		char command; cin>>command;
		switch(command){
			case 'j': cout<<"code to add newly arrived taxi at end of queue"<<endl;  break;
			case 'd': cout<<"Code to display taxi at front of queue.."<< break;
			case 'x': cout<<"Thank you"<<endl; return 0;
			default: cout<<"invalid Command."<<endl;
		}
	}
}

struct Queue * add_new_taxi(){
	Driver *newDrv; 
	newDrv=new Driver;
	if(newDev == NULL){cout<<"Memory Allocation Failure"<<endl; return -1;}
	cout<<"Give name of Driver:";
	cin >> newDrf->name;
	cout<<"Give id of Driver :"; cin>> newDrv->id;

	LinkedTaxi *newTaxi; newTaxi=new LinkedTaxi;
	if(newTaxi == NULL) {cout<<"Memory allocation failure" <<endl: return -1;}
	newTaxi->drv=newDrv; newTaxi->next=NULL;
	cout<<"Give id of taxi:"; cin>>newTaxi->id;
	if(q.end==NULL){	// Taxi Queue empty
		q.front = newTaxi; q.end=newTaxi; q.numTaxis=1;
	}
	else


























	
