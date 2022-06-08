#include<stdio.h>
int main(){
	int i,j,k;
	
	for(i=1;i<=8;i++){
		
		
		for(j=1;j<=8;j++){
			if((i+j)%2==0) printf("  ");
			else{			
			printf("%c%c",219,219);
		}
		}
	   printf("\n");
		
	}
	
	
	
	
	
/*	11 12. 13 14. 15 16. 17 18.
	
	21. 22 23. 24 25. 26 27. 28
	
	31 32. 33 34. 35 36. 37 38.*/
	
	return 0;
}
