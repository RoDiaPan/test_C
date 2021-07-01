#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int head,int mid ,int tail){
	int lenA = mid-head+1;
	int lenB = tail-(mid+1)+1;
	int A[lenA];
	int B[lenB];
	
	int i,j,k;
	for(i = 0; i < lenA; i++){
		A[i] = arr[head + i];
	}
	for(j = 0; j < lenB; j++){
		B[j] = arr[mid + 1 + j];
	}
	
	i = 0;
  	j = 0;
  	k = head;
  	
  	while(i < lenA && j < lenB){
  		if(A[i]<B[j]){
  			arr[k] = A[i];
			i++;k++;	
		}
		else{
			arr[k] = B[j];
			j++;k++;
		}
	}
	
	while(i<lenA){
		arr[k] = A[i];
		i++;k++;
	}
	while(j<lenB){
		arr[k] = B[j];
		j++;k++;
	}
}

void merge_sort(int arr[], int head, int tail){
	if(head < tail){
		int mid = (head + tail) / 2;
		merge_sort(arr, head, mid);
		merge_sort(arr, mid+1, tail);
		merge(arr, head, mid, tail);
	}
}

int main(){
	
	int arr[8] = {9,5,65,3,10,7,1,43};
	for(int i = 0; i < 8;i++)
		printf("%d,",arr[i]);
	printf("\n");
	merge_sort(arr,0,7);
	for(int i = 0; i < 8;i++)
		printf("%d,",arr[i]);
	
	return 0;
} 
