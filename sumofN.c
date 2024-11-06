#include<stdio.h>
int sum(int x){
    if(x==1 || x==0) return 1;
    else return x+sum(x-1);
}
// void sum(int n,int s){
//     if(n==0){
//     printf("%d",s);
//     return ;}
//     sum(n-1,s+n);
//     return ;
// }
int main(){
    int n ;
    printf("Enter the n : ");
    scanf("%d",&n);
    int s =sum(n);//sum(n,0);
    printf("%d",s);
    return 0;
}