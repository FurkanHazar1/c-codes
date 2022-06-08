#include <stdio.h>

int main(){
	
	float turk,mat,fen,sos,net,dogru,yanlis,puan,turky,maty,feny,sosy,obp;
	printf("Lutfen Diploma Notunuzu Giriniz:");
	scanf("%f",&obp);
	printf("\nLutfen Dogru-Yanlis Sayinizi Giriniz:\n");
	printf("\nTurkce Dogru:");
	scanf("%f",&turk);
	printf("Turkce yanlis:");
	scanf("%f",&turky);
	printf("\nMatematik Dogru:");
	scanf("%f",&mat);
	printf("Matematik Yanlis:");
	scanf("%f",&maty);
	printf("\nFen Dogru:");
	scanf("%f",&fen);
	printf("Fen yanlis:");
	scanf("%f",&feny);
	printf("\nSosyal Dogru:");
	scanf("%f",&sos);
    printf("Sosyal Yanlis:");
    scanf("%f",&sosy);
    
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
