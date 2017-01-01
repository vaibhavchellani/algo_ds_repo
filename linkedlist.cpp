
// This is pogram for inserting at start of linked list and printing linked list in reverse.
// language used is c


#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{						//structure definition for node
	int data;
	struct Node *link;
};
struct Node* head;
void insert(int x) 					//funtion to add nodes at the starting of linked list
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
   if(head == NULL)
   {
    temp->data = x;
    temp->link = NULL;
    head = temp;
	}
	else
	{
		temp->data = x;
		temp->link = head ;
		head = temp ;
	}
}

void print(){								// iterative method for printing linked list
	struct Node* p;
	while(p != NULL){
		printf("%d ",p->data);
		p=p->link;
}
}
void print1(struct Node *s)					//prints linked list using recursion
{
	if(s!=NULL)
	{
		printf("%d ",s->data);
		print1(s->link);
	}
	else
		return;
}
void delete_at_begin(){
    Node* ptr=head;
	head=ptr->next;
	free(ptr);
}


int main(){
	int n;
	head = NULL;
	printf("Enter the no of elements ");
	scanf("%d",&n);
	int element;
	printf("enter the elements separated by spaces    ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&element);
		insert(element);
	}

	printf("the elements are(when iterative method is used");
	print();

	printf("the elements are(when recursion method is used");
	print1(head);
	delete_at_begin();
	print1(head);
	/*insert(2);
	insert(3);
	insert(4);

	print();
	print1(head);*/


}
