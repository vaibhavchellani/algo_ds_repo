#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;
struct Node
{
	Node* alphabets[26];
	int data;
	bool isend;

}*root=NULL;


Node * getnode()
{
	Node *temp=new Node();
	
	temp->isend=false;
	for(int i=0;i<26;i++)
	{
		temp->alphabets[i]=NULL;
	}
	return temp;
}


void insert(char s[])
{
	if(root==NULL)
	{
		root=getnode();

	}
	Node *current_node=root;
	for (int i = 0; i < strlen(s); i++)
	{
		if(current_node->alphabets[(int)s[i]-97]==NULL)
		{
			Node *new_node=getnode();
			current_node->alphabets[(int)s[i]-97]=new_node;
			current_node=new_node;	
		}
		else
		{
			current_node=current_node->alphabets[(int)s[i]-97];
		}
	}
	current_node->isend=true;


}
void search_word(char s[])
{
	if(root == NULL)
        cout << "There is no word in Trie" << endl;

    Node *current = root;
    unsigned int i;

    for(i = 0; i < strlen(s); i++)
    {
        

        if(current -> alphabets[int(s[i] - 'a')] == NULL)
        {
            break;
        }
        else
            current = current-> alphabets[int(s[i] - 'a')];
    }

    if(i == strlen(s) && current -> isend == true)
        cout << s << " Found" << endl;
    else
        cout << s << " Not Present" << endl;
}
int main()
{	char s[3]="hi";
	insert(s);
	search_word(s);
	return 0;
}
