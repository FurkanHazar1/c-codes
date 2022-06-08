#include<stdio.h>
#include<string.h>
int main(){
	char metin[100],metin2[100],kelime[20],kelime2[20];
	int i,j,k,a=0,esitlik;
	printf("ilk metni girin lutfen: ");
	gets(metin);
	printf("ikinci metni girin lutfen: ");
	gets(metin2);
	for(i=0;metin[i]!='\0'&&metin2[i]!='\0';i++){
		if(metin[i]!=' '){
				for(k=0,i=i;metin[i]!=' ';k++,i++){
					kelime[k]=metin[i];
				}
			}
		if(metin2[i]!=' '){
			for(k=0,i=i;metin2[i]!=' ';k++,i++){
				kelime2[k]=metin2[i];
			}
		}
			if(esitlik==0){
				a++;
			}
	}
	printf("%d",a);
	return 0;	
}
