#include "Function.h"
#include <iostream>
#include <algorithm>
using namespace std;
void Intersection(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
    int intersection[100];
    int counter = 0;
    for (int i = 0; i < NumberOfElements1; i++)
    {
        for (int j = 0; j < NumberOfElements2; j++)
        {
            if (array1[i] == array2[j])
            {
                intersection[counter++] = array1[i];
            }
        }
    }
    sort(intersection, intersection + counter);
    cout << "The intersection between the two sets of data: ";
    for (int i = 0; i < counter; i++)
    {
        cout << intersection[i] << " ";
    }
    cout << endl;
}
void Union(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
    int unification[100];
    int counter = 0;
    int found = 0;
    for (int i = 0; i < NumberOfElements1; i++)
    {
        found = 0;
        for (int j = 0; j < counter; j++)
        {
            if (unification[j] == array1[i])
            {
                found = 1;
            }
        }
        if (found == 0)
        {
            unification[counter++] = array1[i];
        }
    }
    for (int i = 0; i < NumberOfElements2; i++)
    {
        found = 0;
        for (int j = 0; j < counter; j++)
        {
            if (unification[j] == array2[i])
            {
                found = 1;
            }
        }
        if (found == 0)
        {
            unification[counter++] = array2[i];
        }
    }
    cout << "Unification of the two sets of data: ";
    sort(unification, unification + counter);
    for (int i = 0; i < counter; i++)
    {
        cout << unification[i] << " ";
    }
    cout << endl;
}