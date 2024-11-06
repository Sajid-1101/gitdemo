#include<stdio.h>

int fibo(int a){
    if(a<=2) return 1;
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a;
    printf("Enter the term: ");
    scanf("%d",&a);
    printf("value : %d",fibo(a));
}