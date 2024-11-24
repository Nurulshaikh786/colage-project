#include<stdio.h>
int main(){
    int n,cd=0;
    printf("Enter number : ");
    scanf("%d",&n);
    while (n>0){
        cd++;
        n = n/10;
    }
    printf("The digits are : %d",cd);
    return 0;
}