#include<TXlib.h>
#include<cmath>
#include<assert.h>
#include<string.h>
#include"io.h"
#include"Solver.h"
#include"tests.h"
#include"All_function.h"

void Solver()
{
    printf("Square equation solver\n");
    printf("Enter a, b, c:");

    double a = 0;
    double b = 0;
    double c = 0;

    Enter_coefficients (&a, &b, &c);

    double x1 = 0;
    double x2 = 0;

    Roots_number N_roots = ZERO_ROOTS;

    N_roots = Square_or_linear (a, b, c, &x1, &x2);

    Getting_roots (N_roots, x1, x2);
}
