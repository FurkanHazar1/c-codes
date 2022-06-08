#include<stdio.h>
int main(){
	/*int a,i,k,j,at,ao,sayi;
	at=0;
	ao=0;
	a=0;
	while(1){
	
		printf("sayi gir:\n");
		scanf("%d",&sayi);
		if(sayi>=0){
			
			for(j=2;j<sayi;j++){
			
				if((sayi%j)!=0){
					
					at=at+sayi;
					a++;
					ao=at/a;
					break;
				}
				
			}
			
		}
		else{
			break;
		}
	
		
	}
	printf("asal sayi toplam: %d\nasal sayi ortalma :%d",at,ao);*/	
	
	
	int k;
	for(int i=50;i<=100;i++){
		k=0;
		for(int j=2;j<=50;j++){
			if((i%j)==0){
				k=1;
			}
		
		}
			if(k==0){
				printf("%d\t",i);
			}
		
	}
		
	return 0;
}
