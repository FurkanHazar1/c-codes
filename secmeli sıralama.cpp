#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int dizi[100], s, x, y, pw, t;
	srand(time(NULL));
   printf("LUTFEN DIZI ICIN ELEMAN SAYISINI GIRINIZ\n");
   scanf("%d", &s);
   /*
   printf("%d ELEMANA AIT DEGERLERI GIRINIZ\n", s);
	for ( x = 0 ; x < s ; x++ )

      scanf("%d", &dizi[x]);
	*/
	for(int i=0;i<s;i++){
	dizi[i]=rand()%s; 
	}
   for ( x = 0 ; x < ( s - 1 ) ; x++ )
   {
      pw = x;

      for ( y = x + 1 ; y < s ; y++ )
      {
         if ( dizi[pw] > dizi[y] )
            pw = y;
      }
      if ( pw != x )
      {
         t = dizi[x];
         dizi[x] = dizi[pw];
         dizi[pw] = t;
      }
   }

   printf("ARTAN SIRAYA GORE LISTELEME:\n");

   for ( x = 0 ; x < s ; x++ )
      printf("%d\n", dizi[x]);

   return 0;
}

