# include<stdio.h>
int main(){
	int a,i,j;
	
	for(i=1;i<=10;i++){
		
		for(j=1;j<=10;j++){
			
			
			if(i==j)
			printf("*");
		
			else if(i>j){
				printf("*");
				
			}
			else{
				break;
			}
			
		}
		printf("\n ");
		
		
		
		
		
	}
	/*11
	  21 22
	  31 32 33
	
	
	*/
	
	return 0;
}
