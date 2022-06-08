#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi1[10],dizi2[10],a,b,i,j,c,k,f;
	srand(time(NULL));
	for(i=0;i<10;i++){
		a=rand()%50;
		b=rand()%50;
		dizi1[i]=a;
		dizi2[i]=b;
		printf("dizi1 %d. eleman : %d      dizi2 %d. eleman: %d \n",i+1,dizi1[i],i+1,dizi2[i]);
	}
	for(j=0;j<10;j){
		if(j%2==0){
			dizi1[j]=c;
		}
		else{
			dizi2[j]=k;
		}
		
	
}
	return 0;
}
