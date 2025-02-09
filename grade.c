#include <stdio.h>

int main() {
    int h, t;       
    float c;        
    int condition1, condition2, condition3, conditions_met, grade;
    scanf("%d %f %d", &h, &c, &t);
    condition1 = (h > 50);
    condition2 = (c < 0.7);
    condition3 = (t > 5600);
    conditions_met = condition1 + condition2 + condition3;
    if (condition1 && condition2 && condition3) {
        grade = 10;
    } else if (condition1 && condition2) {
        grade = 9;
    } else if (condition2 && condition3) {
        grade = 8;
    } else if (condition1 && condition3) {
        grade = 7;
    } else if (conditions_met == 1) {
        grade = 6;
    } else {
        grade = 5;
    }
    printf("The grade of the steel is: %d\n", grade);
    if (conditions_met == 3) {
        printf("All of the conditions met.\n");
    } else if (conditions_met == 2) {
        printf("Two conditions met.\n");
    } else if (conditions_met == 1) {
        printf("Only one condition met.\n");
    } else {
        printf("None of the conditions met.\n");
    }

    return 0;
}
