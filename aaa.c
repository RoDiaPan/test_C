#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//using namespace std;

int add(int *a,int *b){
	return (*a+*b);
}

int main(){
	int *p = malloc(6*sizeof(int));
	for(int i = 0; i < 6;i++){
		p[i]= i;
		printf("%d\n",p[i]);
	}
	printf("%d",sizeof(short));
	
	free(p);

	
//	int x = 5,y =6;
//	int (*fptr)(int*,int*) = &add;
//	cout<<fptr(&x,&y)<<endl;

//    char str1[] = "xyz";
//    char str2[] = "abc";
//	char *ptr;
//    int len = strlen(str1) + strlen(str2) + 1;
//    char concated[len];
//    ptr = memset(concated, '\0', len);
//    memset(ptr, '2', 2);
//    printf("%s\n",concated);
//    printf("%d",len);
//    strcat(concated, str1);
//    printf("%s",concated);
    
	
//	int arr[5]={0,1,2,3,4};
//	int *ptr=arr;
//	cout<<ptr<<endl;
////	*ptr++;
////	(*ptr)++;
////	*(ptr++);
////	*++ptr;
////	*(++ptr);
//	cout<<ptr<<endl;
//
//	for(int i = 0; i < 5;i++)
//		cout<<arr[i]<<',';
	
//	char str[6] ="hello";
////	char *ptr ="hello";
//	char *ptr = str; 
////	ptr[0] = 'a';
//	cout<<str<<endl;


	
//	func ring strcpy reverse malloc bit
	return 0;
} 
