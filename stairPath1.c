#include<stdio.h>

int stairs(int a){
    if(a<=3) return a;
    return stairs(a-1)+stairs(a-2)+stairs(a-3);// max two steps are allow
}
int main(){
    int a;
    printf("Enter the no.of stairs: ");
    scanf("%d",&a);
    printf("total ways : %d",stairs(a));
}