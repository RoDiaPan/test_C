#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int*b){
	
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *b ^ *a;
	
}
void bubble(int *a,int len){
	
	for(int i = 0; i < len; i++){
		for(int j = 0; j < i; j++){
			if (*(a+j) > *(a+i)){
				swap((a+j),(a+i));
			}
		}
	}
	
}

int main(){
	
	int a[5] = {7,3,9,1,5};
	int *ptr = a;
//	printf("a = %d,b = %d\n",a,b);
//	swap(&a,&b);
//	printf("a = %d,b = %d\n",a,b);
	for(int i = 0; i < 5; i++)
		printf("%d",a[i]);
	printf("\n");
	bubble(a,5);
	for(int i = 0; i < 5; i++)
		printf("%d",a[i]);
	printf("\n%d",a);
	return 0;
} 
