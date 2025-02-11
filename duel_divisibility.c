#include <stdio.h>

int main() {
    int x,y,z ;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if((x>=1 && x<=10000000000) && (y>=1 && y<=10000000000) && (z>=1 && z<=10000000000)){
    if(x%y==0 && x%z==0) printf("X defeats all!");
         else if(x%z==0) printf("Z outsmarts X!");
             else if(x%y==0) printf("Y triumphs over X!");
                 else if (!(x%y==0 && x%z==0)) printf("X remains undefeated!");
    }
    return 0 ;
}