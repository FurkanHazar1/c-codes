 #include<stdio.h>
int main(){
     int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=5;j++){
			
		if(i<=5){
			
			
			if(i+j<=5){
			printf(" ");
			}
			else{
				printf("#");
			}
			
		}
		else{
	
		if(i-j==4){
			printf("#");
		}
		else if(i-j==3){
			printf("#");
			
		}
		else if(i-j==2){
		
		printf("#");
		
			}
		else if(i-j==1){
			
			printf("#");
			
		}
		else{
			printf(" ");
		}
			
		}	
			
			
		}
				printf("\n");
	}


/*

61 62. 63. 64. 65.
71 72 73. 74. 75.
81 82 83 84. 85.
91 92 93 94 95.


*/








return 0;
}
