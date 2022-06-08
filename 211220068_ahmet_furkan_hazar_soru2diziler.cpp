#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi1[10],dizi2[10],a,b,i,j,c;
	srand(time(NULL));
	for(i=0;i<10;i++){
		a=rand()%50;
		b=rand()%50;
		dizi1[i]=a;
		dizi2[i]=b;
		printf("dizi1 %d. elemani: %d      dizi2 %d. elemani: %d\n",i+1,dizi1[i],i+1,dizi2[i]);
		
			
			}
			printf("\n\ndizilerin degismis sekli\n");
			for(j=0;j<10;j++){
			if(j%2==0){
		c=dizi1[j];
		dizi1[j]=dizi2[j+1];
		dizi2[j+1]=c;
	}
			printf("dizi1 %d. eleman :%d    dizi2 %d. eleman = %d\n ",j+1,dizi1[j],j+1,dizi2[j]);
			}


	return 0;
}

