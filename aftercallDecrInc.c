#include<stdio.h>
void increasing(int x){
    if(x==0) return ; 
    increasing(x-1);
    printf("%d\n",x);
    return ;
}
int main(){
    int n ;
    printf("Enter the n : ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}