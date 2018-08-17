#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
  int Data;
  struct Node *ptr_next;
  struct Node *ptr_next_next;
};

/*
--------------------------------------------------------------------
//This is answer to Question Q1
--------------------------------------------------------------------
*/
//FUNCTIN TO ADD THE NODE AT THE END ON LINKED LIST
void insert_node(struct Node** head, int ndata)
{
    
    struct Node* new = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head;  

    new -> Data  = ndata;
    new -> ptr_next = NULL;
    if (*head == NULL)
    {
       *head = new;
       return;
    }
    while (last->ptr_next != NULL)
        last = last->ptr_next;
    last->ptr_next = new;
    return;
}


/*
--------------------------------------------------------------------
//This is answer to Question Q2.
--------------------------------------------------------------------

//FUNCTION TO PRINT THE LINKED LIST
*/
void Print_LL(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->Data);
     node = node->ptr_next;
  }
}

/*
--------------------------------------------------------------------
//This is answer to Question Q3.
--------------------------------------------------------------------

//FUNCTION TO SWAP THE LINKED LIST
*/
void swap_node(struct Node **head, int x, int y)
{
   
   if (x == y) return;
 
   struct Node *prevX = NULL, *curX = *head;
   while (curX && curX->Data != x)
   {
       prevX = curX;
       curX = curX->ptr_next;
   }
 
   
   struct Node *prevY = NULL, *curY = *head;
   while (curY && curY->Data != y)
   {
       prevY = curY;
       curY = curY->ptr_next;
   }
 
      if (curX == NULL || curY == NULL)
       return;
 
   
   if (prevX != NULL)
       prevX->ptr_next = curY;
   else 
       *head = curY;  
 
   
   if (prevY != NULL)
       prevY->ptr_next = curX;
   else  
       *head = curX;
 
   
   struct Node *temp = curY->ptr_next;
   curY->ptr_next = curX->ptr_next;
   curX->ptr_next  = temp;
}





/*
--------------------------------------------------------------------
//This is answer to Question Q4.
--------------------------------------------------------------------

//FUNCTION TO DELETE THE NODE BY TAKING ARGV. OF NODE POINTER
*/

void delete_node(struct Node **head, int position)
{
   
   if (*head == NULL)
      return;
    
   struct Node* temp = *head;
     
    if (position == 0)
    {
        *head = temp->ptr_next;   
        free(temp);               
        return;
    }
     
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->ptr_next;
     
    if (temp == NULL || temp->ptr_next == NULL)
         return;
     
    struct Node *ptr_next = temp->ptr_next->ptr_next;
     
    free(temp->ptr_next);  
    temp->ptr_next = ptr_next;  
}

//MAIN PROGRAM
int main()
{
  
  struct Node* head = NULL;
  int num=10,idata=0,i,j,ddata=0;
//  printf("Enter the data for 10 nodes:\n");		//this two lines are for making the input node for user entered values
//  scanf("%d",&num);
	for(i=0; i<num; i++){
	printf("enter the data for node[%d]:",i+1);
	scanf("%d",&idata);
		insert_node(&head, idata);
 	}
  printf("\nCreated Linked list is: ");
  Print_LL(head);
  printf("\n");

  printf("\nenter the position to delete:");
  scanf("%d",&idata);

  delete_node(&head,idata-1);
  printf("after deleting the node LL is as follows:\n");
  Print_LL(head);

  printf("\nBefore Swaping\n");
  printf("enter the position from 1-10 which need to be swapped:");
  scanf("%d %d",&i,&j);
  swap_node(&head, i, j);
  printf("after swaping the nodes[%d] and [%d] the LL is as follows:\n",i,j);
  Print_LL(head);	
  printf("\n");
 
 return 0;
}

