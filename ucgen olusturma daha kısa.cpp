# include<stdio.h>
# include<math.h>


int main(){

int a,b,c;
printf("sayi gir a b c\n");
scanf("%d%d%d",&c,&b,&a);

	if(abs(a-b)<c&&c<(a+b)){
		printf("c uygun\n");
		if(abs(a-c)<b&&b<(a+c)){
			printf("b uygun\n");
			if(abs(b-c)<a&&a<(b+c)){
			
			printf("a uygun\n");
			printf("ucgen olusur");
		   }
			else{
				printf("a uygun degil");
				printf("\nucgen olusmaz\n");
			}
						
		}
		else{
		printf("b uygun degil");
		printf("\nucgen olusmaz");		

		}
	
}
else{printf("c uygun degil");
printf("\nucgen olusmaz");	
}
















return 0;
}
