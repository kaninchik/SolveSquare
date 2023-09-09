#ifndef _SOLVER_H
#define _SOLVER_H

enum Roots_number{ZERO_ROOTS, ONE_ROOT, TWO_ROOTS, INF_ROOTS};

bool Is_zero (double x);

Roots_number Solve_linear (double b, double c, double*x1);
Roots_number Solve_square (double a, double b, double c, double*x1, double*x2);
Roots_number Square_or_linear (double a, double b, double c, double*x1, double*x2);

#endif //_SOLVER_H
