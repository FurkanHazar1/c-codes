#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int num,eleman;
	FILE *dosya=fopen("sayilar.txt","w");
	for(num=0;num<100;num++){	
		eleman=rand()%1000;
		fprintf(dosya,"%d\n",eleman);
		printf("%d.eleman= %d\n",num+1,eleman);
	}
	fclose(dosya);

	return 0;
}
