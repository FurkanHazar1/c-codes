#include<stdio.h>
#include<stdlib.h>

typedef struct list{
	int x;
	list *next;
}liste;

int main(){
	
	liste *root,*iter;
	root=(liste*)malloc(sizeof(liste));
	iter=root;
	root->x=10;
	root->next=(liste*)malloc(sizeof(liste));
	root->next->x=20;
	root->next->next=(liste*)malloc(sizeof(liste));
	root->next->next->x=300;
	printf("%d  %d   %d\n",root->x,root,sizeof(liste));
	printf("%d  %d   %d\n",root->next->x,root->next,sizeof(liste));
	printf("%d  %d   %d\n",root->next->next->x,root->next->next,sizeof(liste));
	

}
