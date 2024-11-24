#include<stdio.h>
int main(){
	int n;
	lable:
	printf("Enter a positive number : ");
	scanf("%d",&n);
	if(n<=0){
		printf(" Please enter a positive number...!!\n");
		goto lable;
	}
	return 0;
}