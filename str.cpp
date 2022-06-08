#include<stdio.h>
#include<string.h>
int main(){
	char metin[100],metin2[100],kelime[20],kelime2[20];
	int i,j,k=0,a=0,esitlik;
	printf("ilk metni girin lutfen: ");
	gets(metin);
	printf("ikinci metni girin lutfen: ");
	gets(metin2);
	for(i=0;metin[i]!='\0'&&metin2[i]!='\0';i++){
		if(metin[i]!=' '){
		kelime[k]=metin[i];
		k++;
		}
		else if(metin[i]==' '){
			k=0;
		}
		if(metin2[i]!=' '){
		kelime2[a]=metin[i];
		a++;
		}
		else if(metin2[i]==' '){
			a=0;
		}	
	}
	esitlik=strcmp(kelime,kelime2);
	if(esitlik==0){
		printf("sdfgjp");
	}
	return 0;	
}
