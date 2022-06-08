# include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int sayi[10],a,b,c;
	for(int i=0;i<10;i++){
		sayi[i]=50+rand()%50;
		printf("sayi %d. deger = %d\n",i+1,sayi[i]);
	}
	printf("\n");
	for(int j=0;j<10;j++){
		for(a=2;a<sayi[j];a++){
			if(sayi[j]%a==0){
				printf("%d. sayi asal degil= %d\n",j+1,sayi[j]);
				break;
			}
			printf("%d, sayi ASAL= %d\n",j+1,sayi[j]);
			
		}
		
	}
	
	return 0;
}
