#include "tinyexpr.h"
#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[])
{

    assert(argc == 2);
    const char *expression = argv[1];
    printf("Evaluating:\n\t%s\n", expression);

    double r = te_interp(expression, 0);
    printf("The expression:\n\t%s\nevaluates to:\n\t%f\n", expression, r);

    return 0;
}
