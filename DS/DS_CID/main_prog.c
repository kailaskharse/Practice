#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start, int item);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
struct node *addatpos(struct node *start, int data, int pos);
/*struct node *del(struct node *start, int data);
struct node *reverse(struct node *start);
*/

int main(){
	struct node *start=NULL;
	int choice, data, item, pos;
	while(1){
		printf("\t1.Create List\n");
		printf("\t2.Display\n");
		printf("\t3.Count\n");
		printf("\t4.Search\n");
		printf("\t5.Add to empyt list / add at beginning\n");
		printf("\t6.Add at end\n");
		printf("\t7.Add after node\n");
		printf("\t8.Add before node\n");
		printf("\t9.Add at position\n");
		printf("\t10.Delete\n");
		printf("\t11.Reverse\n");
		printf("\t12.Quit\n\n");
		printf("Enter Your Choice : ");
		scanf("%d", &choice);
	
		switch(choice){
			case 1:	start=create_list(start); break;
			case 2: display(start); break;
			case 3: count(start); break;
			case 4: printf("Enter the Element to be searched: ");
				scanf("%d",&data);
				search(start,data);
					break;
			case 5: printf("Enter the element to be inserted: ");
				scanf("%d",&data);
				start=addatbeg(start,data);
					break; 
			case 6: printf("Enter the element to be inserted: ");
				scanf("%d",&data);
				start=addatend(start,data);
					break; 
			case 7: printf("Enter the element to be inserted: ");
				scanf("%d",&data);
				printf("Enter the element after which to inset: ");
				scanf("%d",&item);
				start=addafter(start,data,item);
					break; 
			case 8: printf("Enter the element to be inserted: ");
				scanf("%d",&data);
				printf("Enter the element befor which to inset: ");
				scanf("%d",&item);
				start=addbefore(start,data,item);
					break; 
			case 9: printf("Enter the element to be inserted: ");
				scanf("%d",&data);
				printf("Enter the position at which to inset: ");
				scanf("%d",&pos);
				start=addatpos(start,data,pos);
					break; 
/*			case 10: printf("Enter the element to be deleted :");
				 scanf("%d", &data);
				 start=del(start,data);
					break;

			case 11: start=reverse(start); break;
	*/		case 12: exit(1);
			default: printf("Wrong Choice\n");
		}//ENd of switch
	}//End of While 
}//End of main


void display(struct node *start){
	struct node *p;	
	if(start==NULL){
		printf("List is empty\n\n");
		return;
	}
	p=start;
	printf("List is:\n");
	while(p!=NULL){
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n");
}

void count(struct node *start){
	struct node *p;
	int count=0;
	p=start;
	while(p!=NULL){
		count++;
		p=p->link;
	}
	system("clear");
	printf("Number of Elements in LL is %d\n",count);
}

void search(struct node *start, int item){
	struct node *p=start;
	int pos=1,flag=0;
	if(p==NULL){
		system("clear");
		printf("List is empty\n");
	}
	while(p!=NULL){
		if(p->info==item){
			printf("Item:%d found at position:%d\n",item,pos);
			flag=1;
		}
	if(pos>=2 && p->link==NULL && flag==0)
		printf("Item %d not found in List\n",item);
	pos++;
	p=p->link;
	}
}

struct node *addatbeg(struct node *start, int data){
	struct node *temp;
	temp=(struct node *) malloc (sizeof(struct node));
	temp->info=data;
	temp->link=start;
	start=temp;
	return start;
}

struct node *addatend(struct node *start, int data){
	struct node *p,*tmp;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=p->link;
	p->link=tmp;
	return start;
}

struct node *addafter(struct node *start, int data, int item){
	struct node *tmp,*p=start;
	while(p!=NULL){
		if(p->info == item){
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
	p=p->link;
	}
	printf("%d Not present in List \n",item);
	return start;
}

struct node *addbefore(struct node *start, int data, int item){
	struct node *p,*tmp;
	if(start==NULL){
		printf("list is empty\n");
		return start;
	}
	if(item == start->info){
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	while(p->link != NULL){
		if(p->link->info == item){
			tmp=(struct node*)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("Item %d not present in the list\n",item);
	return start;
}

struct node *addatpos(struct node *start, int data, int pos){
	struct node *p,*tmp;
	int i;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info=data;
	if(pos==1){
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	for(i=1; i<pos-1 && p!=NULL; i++)
		p=p->link;
	if(p==NULL)
		printf("Less than %d element\n",pos);
	else{
		tmp->link=p->link;
		p->link=tmp;
	}
	return start;
}

struct node *create_list(struct node *start){
	int i,n,data;
	printf("Ente the nubmer of nodes:\n");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;
	printf("Enter the elements to be inserted\n");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for(i=2; i<=n; i++){
		printf("Enter Element to be inserted:\n");
		scanf("%d",&data);
		start=addatend(start,data);
	}
	return start;
}
