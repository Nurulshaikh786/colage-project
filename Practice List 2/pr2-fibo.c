#include<stdio.h>
int main(){
	int b=0,c=1,a,i;
	a=c+b;
	printf("0\n1\n");
	for(i;i<=12;i++){
		printf("%d\n",a);
		b=c;
		c=a;
		a=b+c;
	}
	return 0;
}
