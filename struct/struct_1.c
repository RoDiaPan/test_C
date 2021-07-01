#include<stdio.h>
//#include <stdint.h>

typedef const char* String;


typedef struct{
	String id;
	String name;
	double balance;
}Account;

void printAcct(Account acct){
	printf("Account(%s, %s, %f)\n",acct.id,acct.name,acct.balance);
	
}

int main(void){
	Account acct;
	acct.id = "123-456";
	acct.name = "Rodia";
	acct.balance = 1000;
	printAcct(acct);
	
	printf("Sizeof (acct)= %ld Bytes\n",sizeof(acct));
	
}
