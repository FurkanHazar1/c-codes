#include<stdio.h>
#include<conio.h>
struct isci{
	char isim[20];
	char soyisim[20];
	int yas;
	double aylikGelir;
};
struct isci bilgiler(){
	struct isci bilgi;
	printf("iscinin ismini giriniz\n");
	scanf("%s",&bilgi.isim);
	printf("iscinin soyisimini girininiz\n");
	scanf("%s",&bilgi.soyisim);
	printf("iscinin yasini giriniz\n");
	scanf("%d",&bilgi.yas);
	printf("iscinin aylik gelirini girinziz\n");
	scanf("%d",&bilgi.aylikGelir);
	return bilgi;
}
void veriler(struct isci veri){
	printf("iscinin ismi= %s\niscinin soyismi= %s\niscini yasi= %d\niscinin aylik geliri= %d",veri.isim,veri.soyisim,veri.yas,veri.aylikGelir);
}
int main(){
	struct isci bilgi=bilgiler();
	veriler(bilgi); 
getch();
}

