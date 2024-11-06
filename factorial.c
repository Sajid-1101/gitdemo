#include<stdio.h>
int factorial(int x){
    if(x==1 || x==0) return 1;
    else return x*factorial(x-1);
}
int main(){
    int n ;
    printf("Enter the n :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial of %d is : %d",n,fact);
    return 0;
}