/*#include<stdio.h>
int main(){
	char ogrenci[5][30];
	for(int i=0;i<2;i++){
		printf("Lutfen %d. ogrencinin ismini giriniz: ",i+i);
		scanf("%s",ogrenci[i]);
	}
	FILE *file=fopen("ogrenci.txt","w");
	for(int i=0;i<2;i++){

		fprintf(file,"isim=%s",ogrenci[i]);
	}
	fclose(file);
	return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  int id;

  if ((fp = fopen ("dosya.txt", "w")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) fputc ('a', fp);
  fclose(fp);

  if ((fp = fopen ("dosya.txt", "r")) == NULL) {
      printf("Dosya açma hatasý!");
      exit(1);
  }

  for (id=0; id<10; id++) printf("%c", fgetc(fp));
  
  fclose(fp);
  
  return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char cdizi[40];
  double dd;
  int id;
  char cd;

  if (argc!=2) {
      printf("Kullaným: deneme <Dosya adý>");
      exit(1);
  }

  if ((fp=fopen(argv[1], "w")) == NULL) {
      printf("Dosya açýlamadý!\n");
      exit(1);
  }

  fprintf (fp,"%f %d %s %c", 654.123, 9852, "Bilgisayar", 'A');
  fclose (fp);

  if ((fp=fopen (argv[1], "r")) == NULL) {
      printf("Dosya açýlamadý!\n");
      exit(1);
  }

  fscanf (fp,"%lf%d%s %c", &dd, &id, cdizi, &cd);
  printf("%lf %d %s %c", dd, id, cdizi, cd);
  fclose (fp);
  
  return 0;
}

