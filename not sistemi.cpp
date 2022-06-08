#include<stdio.h>
int main(){
	int i=0,j=0,ortalama,osayi=0,endusuk;
		printf("ogrenci sayisini girin lutfen:\n");
		scanf("%d",&osayi);
		int puan[osayi];
		char isim[osayi][20],soyisim[osayi][20];
		for(i=0;i<osayi;i++){
			printf("ogrencinin adini girin: ");
			scanf("%s",&isim[i][0]);
			printf("\nogrencinin soyadini girin: ");
			scanf("%s",&soyisim[i][0]);
			printf("ogrencinin notunu giriniz: ");
			scanf("%d",&puan);
		}
		printf("\nisim		soyisim		puan\n");
		for(j=0;j<osayi;j++){
			
		printf("%s		%s		%d\n",isim[j],soyisim[j],puan[j]);	
		
		}
			
	return 0;
}
