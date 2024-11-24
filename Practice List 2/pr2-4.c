#include<stdio.h>
int main(){
	int i;
	do{
		printf("Enter any number(Enter 0 to exit): ");
		scanf("%d",&i);
		printf("you enterd this number %d\n",i);
	}while(i!=0);
	return 0;
}