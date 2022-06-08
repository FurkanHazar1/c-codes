#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
	srand(time(NULL));
	int i,dizi[20],*ptr,j,temp,eleman,*ptr2;
		for(i=0;i<20;i++){
			dizi[i]=rand()%100;
			printf("%d\n",dizi[i]);
		}
		printf("\n//////////////\n");
		for(i=0;i<19;i++){
			ptr=&dizi[i];
			temp=i;
			for(int j=i+1;j<20;j++){
				ptr2=&dizi[j];
				if(*ptr>*ptr2){
					ptr=ptr2;
				}
			}
			if(ptr!=&dizi[i]){
			
				eleman=dizi[i];
				dizi[i]=*ptr;
				*ptr=eleman;
				}
			printf("%d\n",dizi[i]);
		}
}


