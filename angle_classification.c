#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x;
    scanf("%d", &x);
    int normalAngle = x % 360;
    for(int i=1;i<=x ;i++){
        if (x == 360*i) {
        printf("Full Rotation");
            return 0 ;
    }
    }
    if (normalAngle == 0) {
        printf("Acute Angle") ;
    } else if (normalAngle < 90) {
        printf ("Acute Angle");
    } else if (normalAngle == 90) {
       printf("Right Angle");
    } else if (normalAngle < 180) {
        printf("Obtuse Angle");
    } else if (normalAngle == 180) {
        printf("Straight Angle");
    } else if (normalAngle < 360) {
        printf("Reflex Angle");
    } 
    return 0 ;
}

