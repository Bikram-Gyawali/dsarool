#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} Node;
Node *top=NULL;
Node *getNode(){
return (Node*)malloc(sizeof(Node));
}
void enqueue(int item){
	Node *newNode= getNode();
	newNode->data =item;
	newNode->next =NULL;
	if(rear==NULL)
	front=newNode;
	else
	rear ->next = newNode;
	rear = newNode;
}
int dequeue(){
	int temp;
	Node *temp;
	if(front==NULL)
	printf("No item to dequeue!\n");
	else{
		temp=front;
		top= top->next;
		item= temp->data;
		free(temp);
		return item;
	}
}
int main()
{
	int item,option;
	while(1){
	printf("Enter option(1 for push and 2 for pop):");
	scanf("%d", &option);
	switch(option)
	{
		case 1:
			printf("Enter the item to push:");
			scanf("%d",&item);
			push(item);
			printf("pushed item: %d\n", item);
			break;
		case 2:
			printf("popped iem:%d\n", pop());
			break;
		default:
			printf("Invalid option selected!\n:");
	}
	}
}
