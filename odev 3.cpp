#include<stdio.h>
int main(){
	char metin[100],kelime[20];
	int i,k,j,kont=0;
	printf("metin girin: ");
	gets(metin);
	printf("bulunmasini istediginiz kelimeyi giriniz: ");
	scanf("%s",kelime);
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]==kelime[0]){
			for(j=i,k=0;kelime[k]!='\0';j++,k++){
				if(metin[j]!=kelime[k]){
					kont=0;
					break;
				}
				else{
					kont=1;
				}
				
			}
		}
		if(kont==1){
			printf("aradiginiz kelime %d. index ile %d. index arasinda",i,j+1);
			break;
		}
	}
	return 0;
}
