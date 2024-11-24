#include<stdio.h>
int main (){
	int sum=0,i;
	
	for(i=1;i<=10;i++){
		sum=sum+i;
		printf("%d\n",i);
	}
	printf("The sum of first 10 number is : %d",sum);
	return 0;
}
