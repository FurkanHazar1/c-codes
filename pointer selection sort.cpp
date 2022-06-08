#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
	srand(time(NULL));
	int i,dizi[20],*ptr,j,temp,eleman;
		for(i=0;i<20;i++){
			dizi[i]=rand()%100;
			printf("%d\n",dizi[i]);
		}
		printf("\n//////////////\n");
		for(i=0;i<19;i++){
			temp=i;
			for(int j=i+1;j<20;j++){
				if(dizi[temp]>dizi[j]){
					temp=j;
				}
			}
			if(temp!=i){
			
				eleman=dizi[i];
				dizi[i]=dizi[temp];
				dizi[temp]=eleman;
				}
			printf("%d\n",dizi[i]);
		}
}
