//Write a c program to find least common multiple of two integer values. 

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    int max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is: %d\n", n1, n2, max);
            break;
        }
        max++;
    }

    return 0;
}
