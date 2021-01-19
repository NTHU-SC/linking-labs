#include "basic_operator.h"
#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }

double mul(double a, double b) {
    printf(" Called C mul function with %f and %f.\n", a, b);
    return a * b;
}

double divide(double a, double b) {return a / b;}
double negate(double a) {return -a;}
double comma(double a, double b) {(void)a; return b;}
