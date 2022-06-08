#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
	int x;
	stack *next;
}stack;

typedef struct queue{
	int x;
	queue *next;	
}q;

stack *top=NULL;
q *root=NULL;
q *son=NULL;


void ekle(int);

void push(int);

void print(int);


int main(){
	int secim,okuma,veri;
	printf("1- stack\n2- queue: ");
	scanf("%d",&secim);
	if(secim==1){
		
		while(1){
			printf("\nstack yapiya eleman ekle: ");
				okuma=1;
				scanf("%d",&veri);
				push(veri);
				print(okuma);
		}
	}
	else{
			while(1){
			
				printf("\nqueue yapiya eleman ekle: ");
				scanf("%d",&veri);
				ekle(veri);
				print(okuma);
			}
			
			
		}
	return 0;
}


void push(int veri){
	stack *eleman;
	eleman=(stack*)malloc(sizeof(stack));
	eleman->x=veri;
	eleman->next=NULL;
	if(top!=NULL)
		eleman->next=top;
	top=eleman;
	
}

void ekle(int veri){
	if(root==NULL){
		root=(q*)malloc(sizeof(q));
		root->x=veri;
		root->next=NULL;
		son=root;
	}
	else{
		son->next=(q*)malloc(sizeof(q));
		son->next->x=veri;
		son=son->next;
		son->next=NULL;
	}
}

void print(int okuma){
	if(okuma==1){
		stack *temp=top;
		printf("\n");
		while(temp!=NULL){
			printf("%d ",temp->x);
			temp=temp->next;
		}
		printf("\n");	
	}
	else{
		q *temp=(q*)malloc(sizeof(q));
		if(root==NULL)
		printf("liste bos");
		temp=root;
		printf("\n");
		while(temp!=NULL){
		printf("%d ",temp->x);
		temp=temp->next;
		}
	}
}
