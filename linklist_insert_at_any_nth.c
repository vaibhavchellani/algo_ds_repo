#include<stdio.h>
#include<stdlib.h>

struct Node{
	int inf;
	struct Node* next;
	};
struct Node* head;
int insert(int x,int y,int f){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	
		if(y==1){
		temp->inf = x;
		temp->next = head;
		head = temp;
		f=1+f;
	    return f;
		}
	else if(y<=f+1){
		struct Node* p=head;
		for(int i=0;i<y-2;i++){
			p = p->next;
			}
		temp->inf=x;	
		temp->next = p->next;
		p->next = temp;	
	    f =f+1;
	    return f;
	}
	else{
		struct Node* t = head;
		while(t->next!=NULL){
			t =t->next;
			}
		t->next = temp;
		temp->next = NULL;
		temp->inf = x;	
		f =f+1;
		return f;
		}	
	}
void print(){
struct Node* temp = head;
while(temp!=NULL)	
	{	printf("%d",temp->inf);
		temp = temp->next;
		}
	printf("\n");
	}	

int main(){
head = NULL;
int r;
r=0;
r=insert(2,1,r);print();
printf("%d\n",r);
r=insert(3,2,r);print();
printf("%d\n",r);
r=insert(4,1,r);print();
printf("%d\n",r);
r=insert(5,6,r);print();
	
	return 0;
	}
