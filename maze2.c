#include<stdio.h>

int maze2(int n,int m){
     int rightway=0;
     int downway=0;
    if(n==1 && m==1) return 1; // last process
    if(n==1){
        rightway+=maze2(n,m-1); 
    }
    if(m==1){
        downway+=maze2(m,n-1);
    }
    if(n>1 && m>1){
        rightway+=maze2(n,m-1);
        downway+=maze2(m,n-1);    
    }
    return rightway + downway;
}
int main(){
    int n,m;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);
    printf("Enter the no. of coloumn : ");
    scanf("%d",&m);
    int totalways = maze2(n,m);
    printf("total no. of ways : %d",totalways);
}