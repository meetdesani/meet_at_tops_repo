#include<stdio.h>
#include<math.h>

main() {
    int p, n, t;
    double r, a, r_decimal;

    printf("Write principal value: ");
    scanf("%d", &p);
    printf("Write interest rate: ");
    scanf("%lf", &r);
    printf("Write total compound in 1 year: ");
    scanf("%d", &n);
    printf("Write period of time in years: ");
    scanf("%d", &t);

    r_decimal = r * 0.01;
    a = p * pow(1 + r_decimal/n, n*t);

    printf("Compound interest: %lf", a);

}

