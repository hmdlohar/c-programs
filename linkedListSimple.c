#include<stdio.h>
#include<stdlib.h>
struct ll* getLast(struct ll* head);
struct ll{
	int data;
	struct ll *next;
};
struct ll createLL(int data){
	struct ll head;
	head.data=data;
	head.next=NULL;
	return head;
}
void printList(struct ll *head){
	struct ll *Head=head;
	while(Head!=NULL){
		printf("%d,",Head->data);
		Head=Head->next;
	}
}
void addList(struct ll *head,int data){
	struct ll *Head=head;
	struct ll *temp=(struct ll*)malloc(sizeof(struct ll));
	temp->data=data;
	//while(Head->next!=NULL){
		//Head=Head->next;
	//}
	//Head->next=temp;
	getLast(head)->next=temp;
}
struct ll* getLast(struct ll* head){
	struct ll *Head=head;
	while(Head->next!=NULL){
		Head=Head->next;
	}
	return Head;  
}
struct ll* getNum(struct ll *head,int num){
	int i;
	struct ll *Head=head;
	for(i=1;i<num;i++){
		Head=Head->next;
	}
	return Head;
}
int getSize(struct ll* head){
	struct ll *Head=head;
	int i=1;
	while(Head->next!=NULL){
		Head=Head->next;
		i++;
	}
	return i;
}
int main(){
	int i,j;
	struct ll head=createLL(5);
	//printList(&head);
	addList(&head,6);
	addList(&head,7);
	addList(&head,8);
	printf("%d  ",getSize(&head));
	printList(&head);
}
