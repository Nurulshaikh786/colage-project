#include<stdio.h>
main()  {
	int n,rev=0,rem;
	printf("enter the number :");
	scanf("%d",&n);

	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("rev = %d",rev);
	return 0;
}