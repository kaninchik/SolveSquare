#include<TXlib.h>
#include<cmath>
#include"Solver.h"
#include"io.h"
#include"tests.h"

bool Is_zero(double x)
{
    const double EPSILON = 0.000001;
    return fabs(x) < EPSILON;
}

Roots_number Solve_linear(double b, double c, double*x1)
{
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    assert(x1 != NULL);

    if (Is_zero(b))
    {
        if (Is_zero(c))
            return INF_ROOTS;
        else
            return ZERO_ROOTS;
    }
    else
    {
        if (Is_zero(c))
        {
            *x1 = 0;
            return ONE_ROOT;
        }
        else
        {
            *x1=-c/b;
            return ONE_ROOT;
        }
    }
}

Roots_number Solve_square(double a, double b, double c, double*x1, double*x2)
{
    assert(std::isfinite(a));
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);

    double d = b*b - 4*a*c;
    if (Is_zero(d))
    {
        *x1=*x2= -b/(2*a);
        return ONE_ROOT;
    }
    else if(d<0)
        return ZERO_ROOTS;
    else
    {
        double sqrt_d = sqrt(d);
        *x1=(-b-sqrt_d)/(2*a);
        *x2=(-b+sqrt_d)/(2*a);
        return TWO_ROOTS;
    }
}
Roots_number Square_or_linear (double a, double b, double c, double*x1, double*x2)
{
    assert(std::isfinite(a));
    assert(std::isfinite(b));
    assert(std::isfinite(c));

    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    if (Is_zero(a))
        return Solve_linear(b, c, x1);
    else
        return Solve_square(a, b, c, x1, x2);
}
