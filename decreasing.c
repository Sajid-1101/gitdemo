#include<stdio.h>
void greeting(int x){
    if(x==0) return ;
    printf("%d\n",x); 
    greeting(x-1);
}
int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}