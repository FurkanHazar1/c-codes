#include<stdio.h>
int main(){
	char isim[20],soyisim[20];
	int numara;
	FILE *dosya=fopen("dosya1.txt","r");
	FILE *dosya2=fopen("dosya2.txt","w");
	while(!feof(dosya)){
		fscanf(dosya,"%s%s%d",&isim,&soyisim,&numara);
		printf("isim=%s\nsoyisim=%s\nnumara=%d\n",isim,soyisim,numara);
		fprintf(dosya2,"isim=%s\nsoyisim=%s\nnumara=%d\n",isim,soyisim,numara);
		
	}	
	fclose(dosya);
	fclose(dosya2);
	
	return 0;
}
