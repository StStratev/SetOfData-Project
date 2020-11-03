#include <iostream>
#include "Function.h"
using namespace std;
int main()
{
    int array1[100], NumberOfElements1, array2[100], NumberOfElements2, intersection[100], counter = 0;
    Greetings();
    while (Menu(array1, NumberOfElements1, array2, NumberOfElements2));
    Exit();
    return 0;
}