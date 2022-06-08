#include<stdio.h>
int main(){
	/*int i,j,k=1;
	for(i=0;i<6;i++){
		for(j=0;j<i+1;j++){
			printf("%d",k);
		}
		k++;
		printf("\n");
	}*/
	int sayi,i,j;
	printf("0-100 arasi sayi gir: ");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(i%10==3){
			printf("%d ",i);
		}
		else if(i/10==3){
			printf("%d",i);
		}
	}
	return 0;
}
