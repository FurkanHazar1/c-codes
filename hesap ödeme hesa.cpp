#include<stdio.h>

int main(){
	
	float avm,odeme,islem;
	
	printf("Lutfen Odeme Miktarini giriniz: ");
	scanf("%f",&avm);
	printf("\nTek Cekimli Islemmi Yoksa Taksitli Islemmi Yapacaksiniz:\n\nTek Cekim Icin 1\n\nTaksitli Islem Icin 2 ye Basiniz:");
	scanf("%f",&islem);
	
	
	
	if(islem==1){
	
	printf("Tek Cekim Odeme Ucreti: %.2f \n\n",avm);
	if(avm<100){
	printf("%%5 Indirim Kazandiniz\n Indirimli Odeme Ucreti: %.2f",avm-((avm*5)/100));
	}
	else if(100<=avm&&avm<200){
		printf("%%8 Indirim Kazandiniz\n\nIndirimli Odeme Ucreti: %.2f",avm-((avm*8)/100));
	}
	else{
		printf("%%9 Indirim Kazandiniz\n\nIndirimli Odeme Ucreti: %.2f",avm-((avm*9)/100));
		
		
	}
    
}
else if(islem==2){
	printf("\nKac Taksit Yapmak Istersiniz? \n\n6 Taksit ise 6 ya\n\n8 Taksit ise 8 e\n\n10 Taksit ise 10 a Basiniz:\n\n");
	int a;
	scanf("%d",&a);
	if(a==6){
	
	printf("6 Taksitili Toplam Odeme Ucreti: %.2f\n\n",avm+((avm*2)/100));
	printf("Aylik Odeme Ucreti: %0.2f",(avm+((avm*2)/100))/6);
}
	else if(a==8){
	printf("8 Taksitili Toplam Odeme Ucreti: %.2f\n\n",avm+((avm*3)/100));
	printf("Aylik Odeme Ucreti: %0.2f",(avm+((avm*3)/100))/8);
}
	else if(a==10){
	
		printf("a0 Taksitili Toplam Odeme Ucreti: %.2f\n\n",avm+((avm*4)/100));
	printf("Aylik Odeme Ucreti: %.2f",(avm+((avm*0.9)/100))/10);
}
		
	}
	
	
	
	
	
	





	
	return 0;
}

