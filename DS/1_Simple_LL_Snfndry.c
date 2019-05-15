#include<stdio.h>
#include<stdlib.h>
#define ISEMPTY printf("Empty List\n")

struct node{
	int value;
	struct node *next;
};

typedef struct node snode;
snode *newnode, *ptr, *prev, *temp;
snode *first=NULL, *last=NULL;

snode * create_node(int);
void insert_node_first();
void insert_node_last();
void insert_node_position();
void display();

int main(){
	int ch;
	char ans='y';
	while(ans=='y' || ans=='Y'){
		printf("\n--------------------------\n");
		printf("operations of singly linked list\n");
		printf("1. Insert Node at fitst\n");
		printf("2. Insert Node at last\n");
		printf("3. Insert Node at position\n");
		printf("4. Display list from begenning\n");
		printf("5. Exit\n");
		printf("\n---------------------------\n");
		printf("Enter Your Choice (Y/N) \n");
		scanf(" %d",&ch);
		switch(ch){
			case 1: insert_node_first();
				break;
			case 2: insert_node_last();
				break;
			case 3: //insert_node_position();
				break;
			case 4: display();			
				break;
			default: printf("Invalid choice\n");
				break;
		}
		printf("\nYOU WANT TO CONTINUE\n");
		scanf(" %c",&ans);
	}
	return 0;
}

snode * create_node(int val){
	newnode = (snode *)malloc(sizeof(snode));
	if(newnode==NULL){
		printf("Memory was not allocated\n");
		return 0;
	}
	else{
		newnode->value=val;
		newnode->next=NULL;
		return newnode;
	}
}

void insert_node_first(){
	int val;
	printf("Enter the Value:\n");
	scanf("%d",&val);
	newnode=create_node(val);
	if(first==last && first==NULL){
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	} else {
		temp=first;
		first=newnode;
		first->next=temp;
	}
	printf("\n Inserted....\n");
}

void insert_node_last(){
	int val;
	printf("Enter the value:\n");
	scanf("%d",&val);
	newnode=create_node(val);
	if(first==last && last==NULL){	
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
	}else {
		last->next=newnode;
		last=newnode;
		last->next=NULL;
	}
	printf("\n Inserted");
}

void display(){
	if(first==NULL){
		ISEMPTY;
		printf("\nNo node in list to display\n");
	}else{
		for(ptr=first; ptr!=NULL; ptr=ptr->next){
			printf("%d\t",ptr->value);
		}
	}
}

		
		
