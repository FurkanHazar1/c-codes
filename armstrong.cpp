#include<stdio.h>
#include<math.h>
int main(){
	int sayi,k=0,c=0,a,d=0,bol,f=0,h=0,b=0;
	printf("sayi gir: ");
	scanf("%d",&sayi);
		a=sayi;
		bol=100;
	int	bol2=1000;
	int	bol3=10000;
	for(int i=0;i<5;i++){
		if(sayi>=100&&1000>sayi){
		k=a/bol;
		a=a%bol;
		bol=bol/10;
		c=c+pow(k,3);
		f++;
		if(c==sayi)
			d=1;
		if(f==3)
		break;
		}
		
		if(sayi>=1000&&10000>sayi){
	
		k=a/bol2;
		a=a%bol2;
		bol2=bol2/10;
		c=c+pow(k,4);
			h++;
			if(c==sayi)
			d=1;
		}

		
		if(h==4)break;	
		
		if(sayi>=10000){
		k=a/bol3;
		a=a%bol3;
		bol3=bol3/10;
		c=c+pow(k,5);
				b++;
				if(c==sayi)
			d=1;
		}

		
		if(b==5)break;		

	}
		if(c==sayi)
			d=1;		
			

	if(d==1){
	printf("sayi armstrong");
	}
	else{
	printf("sayi armstrong degil");
}


 /*  int a,b,c, kup, sayi, k=1;
   for(a=1; a<=9; a++)  
   	for(b=0; b<=9; b++)
  		for(c=0; c<=9; c++)
  			for(int d=0;d<=9;d++)
			  for(int f=0;f<=9;f++){
			
	       sayi = 10000*a + 1000*b + 100*c + 10*d +f;       
	       kup  = a*a*a*a*a + b*b*b*b*b + c*c*c*c*c+d*d*d*d*d+f*f*f*f*f;  
	       if( sayi==kup ) printf("%d. %d\n",k++,sayi);
 		}
 */		
return 0;

	return 0;
}
