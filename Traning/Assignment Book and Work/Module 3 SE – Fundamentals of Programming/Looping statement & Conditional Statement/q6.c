//fibonacci
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Number : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}


