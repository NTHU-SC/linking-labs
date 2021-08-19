#include "basic_operator.h"
#include <stdio.h>
#include "my_sub.h"

extern void my_sum_(double *ret, double *a, double *b);
double add(double a, double b) { 
  double ret;
  my_sum_(&ret, &a, &b);
  return ret;
}

double sub(double a, double b) { return my_sub(a, b); }

double mul(double a, double b) {
    printf(" Called C mul function with %f and %f.\n", a, b);
    return a * b;
}

extern double _Z6dividedd(double a, double b);
double divide(double a, double b) {return _Z6dividedd(a, b);}


double negate(double a) {return -a;}
double comma(double a, double b) {(void)a; return b;}
