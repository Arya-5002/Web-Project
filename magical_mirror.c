#include <stdio.h>

const char* condition(int n) {
    if (n <= 0) {
        return "INVALID";
    }

    int condition1 = (n > 10 && n % 2 == 0);
    int condition2 = (n > 15 && n % 3 == 0);
    int condition3 = (n % 7 == 0);

    if (condition1 && condition2 && condition3) {
        return "SUPERNATURAL";
    } else if ((condition1 && condition2) || (condition1 && condition3) || (condition2 && condition3)) {
        return "MIRACULOUS";
    } else if (condition1 || condition2 || condition3) {
        return "MAGICAL";
    } else {
        return "NORMAL";
    }
}

int main() {
    int n ;
    scanf("%d",&n);
    printf("The verdict for the number %d is: %s\n", n, condition(n));

    return 0;
}
