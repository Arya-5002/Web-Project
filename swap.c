#include <stdio.h>

int main() {
    int a ,b ;
    scanf("%d",&a);
    scanf("%d",&b);
    int temp = a; 
    a=b ;
    b=a ;
    printf("a = %d\n",b);
    printf("b = %d",temp);
}