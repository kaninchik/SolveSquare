#include<TXlib.h>
#include<cmath>
#include<assert.h>
#include<string.h>
#include"io.h"
#include"Solver.h"
#include"tests.h"
#include"options.h"
#include"All_function.h"

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        if(!strcmp(argv[1], "--test"))
        {
            Test_all();
            return 0;
        }
        else if(!strcmp(argv[1], "--help"))
        {
            Print_description();

            return 0;
        }
        else
        {
            Print_mistake();

            return 0;
        }
    }

    Solver();

    return 0;
}

