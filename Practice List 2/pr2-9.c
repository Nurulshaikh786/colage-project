#include<stdio.h>
int main(){
    int n;
    printf("Enter the unmber : ");
    scanf("%d",&n);
    int i,j=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            j++;
            break;
        }
    }
    if(j==0 && n!=1 ){
        printf("The number is prime!");
    }
    else{
        printf("The number is not prime!");
    }
    return 0;
}