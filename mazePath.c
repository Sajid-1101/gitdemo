#include<stdio.h>

int maze(int cr,int cc,int er,int ec){
     int rightway=0;
     int downway=0;
    if(cr==er && cc==ec) return 1; // last process
    if(cr==er){
        rightway+=maze(cr,cc+1,er,ec); 
    }
    if(cc==ec){
        downway+=maze(cr+1,cc,er,ec);
    }
    if(cc<ec && cr<er){
    rightway += maze(cr,cc+1,er,ec);
    downway += maze(cr+1,cc,er,ec);    
    }
    return rightway + downway;
}
int main(){
    int n,m;
    printf("Enter the no.of rows : ");
    scanf("%d",&n);
    printf("Enter the no. of coloumn : ");
    scanf("%d",&m);
    int totalways = maze(1,1,n,m);
    printf("total no. of ways : %d",totalways);
}