""#include <stdio.h>

int main(){
	
	
	float turk,mat,fen,sos,net,dogru,yanlis,puan,turky,maty,feny,sosy,obp,i;
	printf("Lutfen Diploma Notunuzu Giriniz:");
	scanf("%f",&obp);
	printf("\nLutfen Dogru-Yanlis Sayinizi Giriniz:\n");
	i=1;
	
	do{	
	printf("\nTurkce Dogru:");
	scanf("%f",&turk);
	printf("Turkce yanlis:");
	scanf("%f",&turky);
	if(turky+turk<=40){
	
	}
	else{
		printf("\nhatali giris tekrar dene:\n");
		continue;		
	}
	i++;
	}while(i<2);
	
		
	do{	
	printf("\nMATEMATIK Dogru:");
	scanf("%f",&mat);
	printf("MATEMATIK yanlis:");
	scanf("%f",&maty);
	if(maty+mat<=40){
		
	}
	else{
		printf("\nhatali giris tekrar dene:\n");
		continue;		
	}
	i++;
	}while(i<2);
	
		do{	
	printf("\nFEN Dogru:");
	scanf("%f",&fen);
	printf("FEN yanlis:");
	scanf("%f",&feny);
	if(feny+fen<=20){
		
	}
	else{
		printf("\nhatali giris tekrar dene:\n");
		continue;		
	}
	i++;
	}while(i<2);	
	
	
		do{	
	printf("\nSOSYAL Dogru:");
	scanf("%f",&sos);
	printf("SOSYAL yanlis:");
	scanf("%f",&sosy);
	if(sosy+sos<=20){
	
	}
	else{
		printf("\nhatali giris tekrar dene:\n");
		continue;		
	}
		i++;
	}while(i<2);
			
    float tnet,mnet,fnet,snet,puany;
  
	
    tnet=turk-(0.25*turky);
  	
    mnet=mat-(0.25*maty);
    
    fnet=fen-(0.25*feny);
    
    snet=sos-(0.25*sosy);
   
    printf("\n\nTurkce Net:%.2f\n",tnet);
    printf("Matematik Net:%.2f\n",mnet);
    printf("Fen Net:%.2f\n",fnet);
    printf("Sosyal Net:%.2f\n",snet);
	
	puan=(tnet*3.3)+(mnet*3.3)+(fnet*3.4)+(snet*3.4)+100;
	puany =(tnet*3.3)+(mnet*3.3)+(fnet*3.4)+(snet*3.4)+(obp*0.6)+100;
	
	printf("\n\nTYT Ham Puaniniz:%.4f\n",puan);
	printf("\n\nTYT Yerlestirme Puaniniz:%.4f\n",puany);
	
	
	
	float amat,fiz,kim,bio,amaty,fizy,kimy,bioy,puanayt,puanayty;
	
	printf("\nLutfen AYT Dogru Yanlis Sayinizi Giriniz");
	printf("\nMatematik Dogru Sayisi:");
	scanf("%f",&amat);
	printf("Matematik Yanlis Sayisi:");
	scanf("%f",&amaty);
	
	
	printf("\nFizik Dogru Sayisi:");
	scanf("%f",&fiz);
	printf("Fizik Yanlis Sayisi:");
	scanf("%f",&fizy);
	
	
	printf("\nKimya Dogru Sayisi:");
	scanf("%f",&kim);
	printf("Kimya Yanlis Sayisi:");
	scanf("%f",&kimy);
	
	
	printf("\nBiyoloji Dogru Sayisi:");
	scanf("%f",&bio);
	printf("Biyoloji Yanlis Sayisi:");
	scanf("%f",&bioy); 
	
	
	
	/*Türkçe: 1,32
Matematik: 1,32
Sosyal Bilimler: 1,36
Fen Bilimleri: 1,36 ile çarpýn


Matematik: 3,00
Fizik: 2,85
Kimya: 3,07
Biyoloji: 3,07 ile çarpýn.*/	
	float matnet,fiznet,knet,bnet;
	
	matnet=amat-(0.25*amaty);
	fiznet=fiz-(0.25*fizy);
	knet=kim-(0.25*kimy);
	bnet=bio-(0.25*bioy);
	
	puanayt=(tnet*1.32)+(mnet*1.32)+(snet*1.36)+(fnet*1.36)+100.0+(matnet*3.0)+(fiznet*2.85)+(knet*3.07)+(bnet*3.07);
	puanayty=(tnet*1.32)+(mnet*1.32)+(snet*1.36)+(fnet*1.36)+100.0+(matnet*3.0)+(fiznet*2.85)+(knet*3.07)+(bnet*3.07)+(obp*0.6);
	
	printf("\nAYT Matematik Net:%.2f\n",matnet);
	printf("\nAYT Fizik Net:%.2f\n",fiznet);
	printf("\nAYT Biyoloji Net:%.2f\n",bnet);
	printf("\nAYT Kimya Net:%.2f\n",knet);
	
	
	printf("\nYKS Ham Puaniniz:%.4f\n",puanayt);
	printf("\nYKS Yerlestirme Puaniniz:%.4f\n",puanayty);
	
	return 0;
}
