#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int arr_size,i,j,k,a,num,total=0,greater = 0,smaller = 0,arr[100],temp,hash;
float average;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
	for (j = low; j < high; j++) {
    if (array[j] <= pivot) {
        i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main(){
    
	clock_t start_t, end_t;
    scanf("%d",&arr_size);
    
	int *averages;
    averages=malloc(sizeof(float)*arr_size);
    
	FILE *file;
		file = fopen("data.txt","w");	
	
		srand(time(NULL));
		start_t = clock();
		for(j=0;j<arr_size;j++){
			average=0;
			total=0;
			for(i = 0 ; i < 50 ; i++){
		        num = rand() % 10000 +1;
		       	arr[i]=num;
		       	total += arr[i];
		    }
			average = (1.0*total)/50;
		    averages[j] = average;				
		}
		end_t = clock();
		printf("average of %d nums %lf seconds\n",arr_size,(double)(end_t - start_t) / CLOCKS_PER_SEC);
		start_t = clock();
		quickSort(averages, 0, arr_size);
		end_t = clock();
		
		for(i=0;i<arr_size;i++) fprintf(file,"term %d: %d\n",i+1,averages[i]);	
		
		printf("sorting of %d nums %lf seconds\n",arr_size,(double)(end_t - start_t) / CLOCKS_PER_SEC);
	fclose(file);
	
	return 0;
}
