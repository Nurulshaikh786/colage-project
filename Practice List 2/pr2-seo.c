#include<stdio.h>
int  main(){
    int n,m;
    printf("Enter starting even number : ");
    scanf("%d",&n);
    printf("Enter ending even number : ");
    scanf("%d",&m);
    int i,j,sum=0,s=0;
    if(n%2==0 && m%2==0){
        for(i=n;i<=m;i+=2){
            printf("%d",i);
            sum = sum + i;
        }
        printf("\nThe sum of even number is : %d\n",sum);

        for(j=n+1;j<=m+1;j+=2){
            printf("%d",j);
            s=s+j;
        }
        printf("\nThe sum of odd number is : %d",s);
    }
    else{
        printf("\nPlease enter a even number...");
    }
    return 0;
}
