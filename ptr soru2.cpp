#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	srand(time(NULL));
	FILE *dosya=fopen("sayilar.txt","w");
	int kont,*ptr,i,sayi,mask=16;
	ptr=(int*)malloc(400);

	for(i=0;i<100;i++){
		sayi=rand()%100;
		fprintf(dosya,"%d\n",sayi);
		kont=sayi&mask;
		if(kont==0){
			*ptr=sayi;
			printf("%d\n",*ptr);
			ptr+=4;
		}
	}
	fclose(dosya);
}
