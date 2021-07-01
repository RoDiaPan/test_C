#include<stdio.h>
#include<stdlib.h>

void SWAP(int *a,int *b){
	
//	int t =  *a;
//	*a = *b;
//	*b = t;
  if(*a != *b) {
      *a = *a ^ *b;
      *b = *a ^ *b;
      *a = *a ^ *b;
  }
}

int partition(int number[], int left, int right) { 
    int i = left - 1; 
    int j;
    for(j = left; j < right; j++) {  
        if(number[j] <= number[right]) { 
            i++; 
            SWAP(&number[i], &number[j]); 
        } 
    } 

    SWAP(&number[i+1], &number[right]); 
    return i+1; 
} 

void quickSort(int number[], int left, int right) { 
    if(left < right) { 
        int q = partition(number, left, right); 
        quickSort(number, left, q-1); 
        quickSort(number, q+1, right); 
    } 
} 

int main(){
	
	int arr[4] = {3,9,7,1};

	for(int i = 0; i < 4; i++)
		printf("%d",arr[i]);
	printf("\n");
	quickSort(arr,0,3);
	for(int i = 0; i < 4; i++)
		printf("%d",arr[i]);
//	printf("\n%d",a);
	return 0;
} 
