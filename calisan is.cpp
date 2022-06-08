#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main(){
	/*printf("dizi\n");
	srand(time(NULL));
	for(i=0;i<100;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}	
	printf("\nsiralanmis hali\n");	
	for(i=1;i<100;i++){
		deger=dizi[i];
		for(j=i-1;j>=0 && deger<=dizi[j];j--){
			dizi[j+1]=dizi[j];
		}
		dizi[j+1]=deger;
	}
	for(i=0;i<100;i++){
		printf("%d ",dizi[i]);
	}	
	*/
	
	int dizi[100][100],sayi[100][100],carpim[100][100],i=0,j=0,deger;
	srand(time(NULL));
	printf("dizi\n");
	carpim[i][j]=0;
	while(1){
	
	system("COLOR B");
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			dizi[i][j]=rand()%100;
			printf("%d ",dizi[i][j]);
	
		}
		printf("\n");
	}
		system("COLOR C");
	printf("\nsayi\n");
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			sayi[i][j]=rand()%100;
				printf("%d ",sayi[i][j]);
		}	
		printf("\n");
	}
	printf("\ncarpim\n");
	system("COLOR A");
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			carpim[i][j]=sayi[i][j]*dizi[i][j];
			printf("%d ",carpim[i][j]);
		}
		printf("\n");
		
	}
}
	/*
	int dizi[10],satir,sutun,i,j;
	srand(time(NULL));
	for(i=0;i<10;i++){
		dizi[i]=rand()%10;
		printf("%d ",dizi[i]);
	}
	printf("sutun gir:\n");
	scanf("%d",&sutun);
	printf("satir gir:\n");
	scanf("%d",&satir);
	int	sayi[satir][sutun];
	if(satir+sutun==10){
	printf("\nsayi dizisi\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			sayi[satir][sutun]=dizi[j];
			printf("%d ",sayi[satir][sutun]);
		}
		printf("\n");
	}
  }
	*/

	
	return 0;
}
