#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct list{
	int x;
	list *next;
}liste;


void elemanEkle(liste*,int,int);
liste *siraliEkle(liste*,int);
void goster(liste*);



int main(){
	int secim,eleman,index;
	char kont;
	liste *root,*iter;
	root=(liste*)malloc(sizeof(liste));
	iter=root;
	root->next=NULL;
while(true){

printf("1- sirali eleman eklemek icin\n2- belli bir yere eleman eklemek icin \n\ncikis yapmak icin enter tusuna basiniz: ");
scanf("%d",&secim);	
	
	if(secim==1){
		while(1){
			printf("siralamak istediginiz elemani giriniz cikis yapmak icin E yaziniz: ");
			scanf("%d",&eleman);
			kont=(char)eleman;
			toupper(kont);
			if(kont=='E') break;
			root=siraliEkle(root,eleman);	
		}
			goster(root);
		
	}
	else if(secim==2){
		while(1){
			printf("eleman eklemak istediginiz listenin index degerini giriniz cikis yapmak icin 23 tusuna basiniz: ");	
			scanf("%d",&index);
			kont=index;
			if(kont==23)break;
			
			printf("eleman deðerini giriniz: ");
			scanf("%d",&eleman);
			elemanEkle(root,index,eleman);
					
			goster(root);
		}
	}
	else break;
}
	return 0;	
}


liste * siraliEkle(liste *r,int eleman){
	if(r==NULL){
		r=(liste*)malloc(sizeof(liste));
		r->x=eleman;
		r->next=NULL;
		return r;
	}
	else if(r->x >eleman){
		liste *temp;
		temp=(liste*)malloc(sizeof(liste));
		temp->x=eleman;
		temp->next=r;
		return temp;
	}
	liste *iter,*temp;
	iter=r;
	temp=(liste*)malloc(sizeof(liste));
	while(iter->next!=NULL&&iter->next->x <eleman){
		iter=iter->next;
	}
	temp->next=iter->next;
	iter->next=temp;
	temp->x=eleman;
	return r;
	
}


void elemanEkle(liste *r,int index,int eleman){
	liste *temp;
	temp=(liste*)malloc(sizeof(liste));
	for(int i=1;i<index;i++){
		r=r->next;
	}
	temp->next=r->next;
	r->next=temp;
	temp->x=eleman;
}


void goster(liste *r){
	printf("\n\n");
	while(r->next!=NULL){
		printf("%d ",r->x);
		r=r->next;
	}
	printf("\n\n");
}



