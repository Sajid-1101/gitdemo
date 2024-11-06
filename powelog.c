#include<stdio.h>

int power(int a,int b){
    if(b==0) return 1;
    int x;
    if(b%2==0)
         x=power(a,b/2)*power(a,b/2);
    else x=power(a,b/2)*power(a,b/2)*a;
    return x;
}
int main(){
    int a,b,p;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    p=power(a,b);
    printf("power : %d",p);
}