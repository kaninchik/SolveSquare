#include<TXlib.h>
#include"Solver.h"
#include"io.h"
#include"tests.h"

void Getting_roots (Roots_number N_roots, double x1, double x2)
{
    switch(N_roots)
    {
        case ZERO_ROOTS: printf("no roots\n");
                    break;
        case ONE_ROOT: printf("x=%lg\n", x1);
                    break;
        case TWO_ROOTS: printf("x1=%lg x2=%lg\n", x1, x2);
                    break;
        case INF_ROOTS: printf("Any number");
                    break;
        default: assert(0 && "Unknown number of roots.\n");
                    break;
    }
}

void Enter_coefficients(double*a, double*b, double*c)
{
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);

    int scan = scanf("%lg %lg %lg", a, b, c);

    while(scan != 3)
    {
        clear_buffer();

        printf("enter the correct value\n");
        printf("Enter a, b, c:");

        scan = scanf("%lg %lg %lg", a, b, c);

    }
}

void clear_buffer()
{
    int s;
    s = getchar();
    while( s != '\n' && s != EOF)
    {
        s = getchar();
        continue;
    }
}


