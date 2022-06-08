# include<stdio.h>
int main(){
	int dizi[9][9];
	/*for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			dizi[i][j]=i*j;					//carpým tablosu
			printf("%d\t",dizi[i][j]);
		}
		printf("\n");
		
	}*/
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			
			if(i==j||i+j==8||i==4||j==4){
				dizi[i][j]=1;
				printf("%d\t",dizi[i][j]);
			}
			else{
				dizi[i][j]=0;
				printf("%d\t",dizi[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
