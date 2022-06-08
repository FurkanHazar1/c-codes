#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
int i,j,k=0,a,toplam=0;
int sayi[25];
int asal[25];
srand(time(NULL));		

for(i=0;i<25;i++){
	sayi[i]=(rand()%50)+50;
	printf("%d ",sayi[i],system("COLOR D"));
}
for(i=0;i<25;i++){
	for(j=2;j<sayi[i];j++){
		
		if(sayi[i]%j==0){
			k=1;
			break;
		}
	}
		if(k==0){
		asal[a]=sayi[i];
		toplam+=asal[a];
		a++;
		
		}
k=0;
}
printf("\n");
for(i=0;i<a;i++){
printf("%d ",asal[i],system("COLOR C"));
}
printf("\n");
printf("ortalama: %.2f ",(float)toplam/a,system("COLOR E"));




return 0;
	
}
