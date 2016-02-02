#include <iostream>
#include <cstdio> 
#include <cstdlib>
#include <cassert> 
using namespace std; 

struct node{
	int data; 
	struct node *next;  
};

void push(struct node **head, int data){
	struct node *newNode = (struct node *)malloc(sizeof(struct node)); 
	newNode->data = data;  
	newNode->next = *head;  
	*head = newNode;  
}

int getNth(struct node *head, int index){
	struct node *current = head;  
	int count = 0;  
	while (current != NULL){
		if (count == index){
			return current->data;  
		}
		count++;  
		current = current->next; 
	}
	assert(0);  
}

int main(){
	struct node *head = NULL; 
	// push to construct the list 1->12->1->4->1 
	push(&head,1); 
	push(&head,4); 
	push(&head,1); 
	push(&head,12); 
	push(&head,1); 
	printf("Element at index 3 is %d\n",getNth(head,3));  
	return 0; 
}

