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
void cikar();
void push(int);
void pop();
void print(int);


int main(){
	int islem,veri,okuma;
	while(1){
		printf("lutfen yapmak istediginiz islemi giriniz\n1-stack\n2-queue\n3-cikis: ");
		scanf("%d",&islem);
				if(islem==1){
					printf("stack eleman ekleme silme");
					okuma=1;
					while(1){
					
					printf("\n\n 1-eleman ekle\n2-eleman sil\n cikis:  ");
					scanf("%d",&islem);
					if(islem==1){
					
						printf("lutfen veri giriniz: ");
						scanf("%d",&veri);
						push(veri);
						print(okuma);	
					}
					else if(islem==2){
						pop();
						print(okuma);
					}
				
					else if(islem==3){
						break;
					}
				}
			}
			else if(islem==2){
				okuma=2;
				printf("queue eleman ekleme silme\n");
					while(1){
						printf("\n\n1-eleman ekle\n2-eleman sil\n3-eleman goster\n3-cikis: ");
						scanf("%d",&islem);
						if(islem==1){
							printf("lutfen veri giriniz: ");
							scanf("%d",&veri);
							ekle(veri);
							print(okuma);
						}
						else if(islem==2){
							cikar();
							print(okuma);
						}
						else if(islem==3)
							break;
					}
				}
			
			else if(islem==3){
				break;
			}
	}
	printf("cikis yapilmistir.");
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


void pop(){
	if(top==NULL){
		printf("stack zaten boþ");
	}
	else{
		stack *temp;
		temp=top;
		top=top->next;
		free(temp);
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
void cikar(){
	if(root==NULL){
		printf("liste bos");
	}
	else{
		q *temp=(q*)malloc(sizeof(q));
		temp=root;
		root=root->next;
		free(temp);
	}
}


