/*
�DEV SORULARI

1.Soru->Tek boyutlu bir dizi olu�turup i�ine de�erler atay�p, �nce ba�tan sona, sonra da sondan ba�a yani terse yazd�rma fonksiyonlar�.
	 1 2 3 4 5 6 7 8 9 
	 9 8 7 6 5 4 3 2 1

2.Soru-> strcat ve strcpy fonksiyonlar�n�n benzerini yapacak bir fonksiyon.
	

3.Soru->Kullan�c�dan bir string ve belirli bir karakter al�p karakterin ka� kere string i�inde ge�ti�ini kontrol ediniz.


4.Soru->Fonksiyon i�aret�ileri arrayi olu�turup kullan�c�n�n girdi�i say�ya g�re toplama-��karma-�arpma-b�lme i�lemleri yapt�r�n�z.Derste yapt���m�z gibi
Bir tane bunlar� y�netecek fonksiyon(bir tane fonksiyon arrayi,bir tane islem sayisi(carpma,b�lme),iki tane de sayi alacak).
	islem_sayisi=1(carpma)
	saayi=5
	sayi2=10
	50

*/


//1.SORU
/*void diziyiDoldur(int *dizi){
	srand(time(NULL));
	int *ptr;
	for(ptr=dizi;ptr<dizi+N;ptr++){
		*ptr=rand()%100;
	}	
}
void diziyiYazdir(int *dizi){
	printf("Dizi:");
	int *ptr;
	for(ptr=dizi;ptr<=dizi+N;ptr++){
		printf("%d ",*ptr);
	}
}
void diziyiTerstenYazdir(int *dizi){
	printf("\nDizinin tersten hali:");
	int *ptr=dizi+N;
	for(;ptr>=dizi;ptr--){
		printf("%d ",*ptr);
	}
	
}
*/
//2.SORU
/*void myStrCat(char *str,char *str2){
	
	//int karakterSayisi=strlen(str);
	//char *p1=str+karakterSayisi;
	char *p1=str;
	while(*p1){//*p1!='\0'
		p1++;
	}
	char *p2=str2;
	while(*p2){
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';	
}
void myStrCpy(char *str,char *str2){
	char *p1=str;
	char *p2=str2;
	while(*p2){
		*p1++=*p2++;	
	}
	*p1='\0';
}

int main(){
	
	/*int dizi[N];
	diziyiDoldur(dizi);
	diziyiYazdir(dizi);
	diziyiTerstenYazdir(dizi);
	
	char kullaniciGirisi[]="ogunnnnnnnnnnnnnnnnn";
	char kullaniciGirisi2[]="duygu";
	//myStrCat(kullaniciGirisi,kullaniciGirisi2);
	myStrCpy(kullaniciGirisi,kullaniciGirisi2);
	puts(kullaniciGirisi);
	
	return 0;
}*/

//3.SORU
/*int kacKereGeciyor(char *str,char arananDeger,char degistirilecekDeger){
	int sayac=0;
	char *ptr=str;
	while(*ptr){
		if(*ptr==arananDeger){
			*ptr=degistirilecekDeger;
			sayac+=1;
		}
		ptr++;//bir sonraki karaktere ge�mek icin
	}
	return sayac;

}
*/
//4.SORU
/*

int toplama(int sayi1,int sayi2){
	return sayi1+sayi2;
}
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}
int bolme(int sayi1,int sayi2){
	return sayi1/sayi2;
}
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}
int hesapla(int(*ptr[4])(int,int),int sayi1,int sayi2,int islem){
	
	if(islem==1){
		(*ptr[0])(sayi1,sayi2);
	}
	else if(islem==2){
		(*ptr[1])(sayi1,sayi2);
	}
	else if(islem==3){
		(*ptr[2])(sayi1,sayi2);
	}
	else if(islem==4){
		(*ptr[3])(sayi1,sayi2);
	}
	
}
int main(){
	char karakterDizisi[]="how i met your mother";
	int sonuc=kacKereGeciyor(karakterDizisi,'h','*');
	printf("Aradiginiz karakter dizide %d kere gecmektedir.\n",sonuc);
	puts(karakterDizisi);
	int sayi1,sayi2;
	int islem;
	int(*ptr[4])(int,int);
	ptr[0]=toplama;
	ptr[1]=cikarma;
	ptr[2]=carpma;
	ptr[3]=bolme;
	printf("Lutfen iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("Lutfen yapmak istediginiz islemi seciniz (Toplama icin 1, Cikarma icin 2, Carpma icin 3, Bolme icin 4):");
	scanf("%d",&islem);
	int sonuc=hesapla(ptr,sayi1,sayi2,islem);
	printf("Sonuc:%d",sonuc);
	return 0;
}

*/
