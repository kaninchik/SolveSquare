#ifndef TESTS_H_
#define TESTS_H_

#include"Solver.h"

struct Test_data
{
    double a;
    double b;
    double c;

    double x1_ref;
    double x2_ref;

    Roots_number N_roots_ref;
};

int Test_one (const Test_data *data);
bool Test_all();
#endif

