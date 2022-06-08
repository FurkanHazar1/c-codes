#include<stdio.h>
#include<stdlib.h>

typedef struct liste{
	char isim[20],soyisim[20];
	int numara,ort;
		typedef struct matematik{
			int mviz,mfin,mort;
		}mat;
	
		typedef struct fizik{
			int fviz,ffin,fort;
		}fiz;
	
		typedef struct kimya{
			int kviz,kfin,kort;
		}kim;
	
		typedef struct biyoloji{
			int bviz,bfin,bort;
		}bio;
	int x;
	liste *next;
}list;

int ortalamaHesap(int,int);
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

printf("sirali eleman eklemek icin 1 belli bir yere eleman eklemek icin 2 ye cikis yapmak icin enter tusuna basiniz: ");
scanf("%d",&secim);	
	
	if(secim==1){
		while(1){
			printf("Ogrenci Isim: ");
			scanf("%d",&list.isim);
			
			printf("Ogrenci Soyisim: ");
			scanf("%d",&list.soyisim);
						
			printf("Ogrenci Numara: ");
			scanf("%d",&list.numara);
			
			printf("Matematik Notu Eklemek Icin 1\nFizik Notu Eklemek Icin 2\nBiyoloji Notu Eklemek Icin 3\nKimya Notu Eklemek Icin 4\n");
			
					
		}

		
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
