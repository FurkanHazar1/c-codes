# include <stdio.h>


int main(){
	int i,j,at,a,ao,sayi;
	at=0;
	ao=0;
	while(1){
		printf("sayi gir:\n");
		scanf("%d",&sayi);
		if(sayi>=0){
			for(i=2;i<sayi;i++){
				if(sayi%i!=0){
				
				
					a=0;
					a++;
					at=sayi+at;
					ao=at/a;
					
					break;
				}
		
		}
	}
		else{
			break;
		}
	
		
	}
	printf("asal sayi toplam %d\nasal sayi ortalama",at,ao);
	
	
	return 0;
}
