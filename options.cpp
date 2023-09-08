#include<stdio.h>
#include"options.h"

void Print_mistake()
{
    printf("You used an incorrect function");
}

void Print_description()
{
    printf("SolveSquare.exe - launching the program without passing tests\n"
           "--test - launching the program with passing tests\n"
           "--help - description of functions\n");
}
