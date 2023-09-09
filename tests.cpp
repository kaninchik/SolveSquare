#include<TXlib.h>
#include<cmath>
#include<assert.h>
#include"io.h"
#include"Solver.h"
#include"tests.h"

bool Test_all()
{
    Test_data All_data[5] = {
                        {0, 0, 0, 0, 0, INF_ROOTS},
                        {1, 4, 4, -2, -2, ONE_ROOT},
                        {1, 5, -6, -6, 1, TWO_ROOTS},
                        {0, 0, 1, 0, 0, ZERO_ROOTS},
                        {1, 0, -4, -2, 2, TWO_ROOTS}
                             };
    int N_ok = 0;
    for(int i = 0; i < 5; i++)
        N_ok += Test_one(&All_data[i]);

    if(N_ok == 5)
    {
        printf("The program is working correctly\n");
        return 1;
    }
    else
    {
        return 0;
        printf("The program isn't working correctly\n");
    }

}

int Test_one (const Test_data *data)
{
    assert(data != NULL);

    double x1 = 0;
    double x2 = 0;

    Roots_number N_roots = Square_or_linear (data->a, data->b, data->c, &x1, &x2);

    if(!Is_zero(x1 - data->x1_ref) || !Is_zero(x2 - data->x2_ref) || N_roots != data->N_roots_ref)
        return 0;
    else
        return 1;
}







