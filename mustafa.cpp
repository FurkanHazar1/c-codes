

#include <stdio.h>
#include <math.h>
int main()
{
	
	int sayi,sayia[20],pata,toplam,kalan;
	printf("ikilik sayi sisteminde sayi gir:");
    scanf("%d",&sayi);
    int i;
    while(sayi>0){
	
	kalan=(sayi%10);
    sayia[i]=kalan;
	sayi=sayi/10;
	i++;
	}
    for(int j=0;j<20;j++){
    	sayia[j]=2;
    	}
    for(int c=0;sayia[c]!=2;c++){
    	if (sayia[c]=1){
        pata=pow(2,c);
        toplam+=pata;
    	}
    }
    printf("%d",toplam);
	return 0;
	
}
