#include <iostream>
#include "Function.h"
using namespace std;
int main()
{
    int array1[100], NumberOfElements1, array2[100], NumberOfElements2, intersection[100], counter = 0; // declare variables of type int
    Greetings();
    while (Menu(array1, NumberOfElements1, array2, NumberOfElements2)); // when the Menu function returns true, the cycle continues until a false value is returned
    Exit();
    return 0; // stops the program
}