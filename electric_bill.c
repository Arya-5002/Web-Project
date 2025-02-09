#include <stdio.h>

int main() {
    float n ;
    scanf("%f",&n);
    float res ;
    if(n>=0 && n<=1000000)
    {
    if (n<=100)
    {
       res=5*n ; 
    }
    else if(n<=300){
        res=(100*5)+(n-100)*7;
    }
    else
    {
        res=(100*5)+(200*7)+((n-300)*10);
    }
    if(res<=1200)
    {
        res = 0.9*res ;
    } 
    printf("The electricity bill is: %.2f.\n",res);
    }
        else{
            printf("Invalid Input!");
        }
   
    return 0 ;
}