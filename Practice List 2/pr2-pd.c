#include<stdio.h>
main()  {
	int n,rev=0,rem,j;
	printf("enter the number :");
	scanf("%d",&n);
	j=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==j){
			printf("\nthe number is palindrome.\n");
		}
	else {
			printf("\nthe number is not palindrome.\n");
	}
	printf("Frontward : %d\n",j);
	printf("Backward : %d\n",rev);
	return 0;
}