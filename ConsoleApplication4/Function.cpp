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
void SymetricDifference(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
    int symetry[100];
    int counter = 0;
    int found = 0;
    for (int i = 0; i < NumberOfElements1; i++)
    {
        found = 0;
        for (int j = 0; j < NumberOfElements2; j++)
        {
            if (array1[i] == array2[j])
            {
                found++;
            }
        }
        if (found == 0)
        {
            symetry[counter++] = array1[i];
        }
    }
    for (int j = 0; j < NumberOfElements2; j++)
    {
        found = 0;
        for (int i = 0; i < NumberOfElements1; i++)
        {
            if (array2[j] == array1[i])
            {
                found++;
            }
        }
        if (found == 0)
        {
            symetry[counter++] = array2[j];
        }
    }
    cout << "The Symetric diffrence between the two sets of data: ";
    cout << counter << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << symetry[i] << " ";
    }
    sort(symetry, symetry + counter);
    cout << endl;
}
void PrimeNumbers(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
k:
    int counter = 0;
    cout << "Wich array do you want to work with?" << endl;
    cout << "Array1 - 1 \nArray2 - 2\n";
    cout << "Choose : ";
    int n;
    cin >> n;
    cout << endl;
    if (n == 1)
    {
        cout << "The prime numbers in the first set of data are: ";
        for (int i = 0; i < NumberOfElements1; i++)
        {
            bool prime = true;
            for (int j = 2; j * j <= array1[i]; j++)
            {
                if (array1[i] % j == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (array1[i] == 1)
            {
                prime = false;
            }
            if (prime) cout << array1[i] << " ";
        }
        sort(array1, array1 + counter);
        cout << endl << endl << endl;

    }
    else if (n == 2)
    {
        cout << "The prime numbers in the second set of data are: ";
        for (int i = 0; i < NumberOfElements1; i++)
        {
            bool prime = true;
            for (int j = 2; j * j <= array2[i]; j++)
            {
                if (array2[i] % j == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (array2[i] == 1)
            {
                prime = false;
            }
            if (prime) cout << array2[i] << " ";
        }
        sort(array2, array2 + counter);
        cout << endl << endl << endl;
    }
    else
    {
        cout << "Incorrect input! Please try again!";
        goto k;
    }
    cout << "-----------------------------------------------" << endl << endl << endl;
}
void Input(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
    cout << "Select the length of the first array: ";
    cin >> NumberOfElements1;
    cout << "Insert the numbers of the first array: ";
    for (int i = 0; i < NumberOfElements1; i++)
    {
        cin >> array1[i];
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Select the length of the second array: ";
    cin >> NumberOfElements2;
    cout << "Insert the numbers of the second array: ";
    for (int j = 0; j < NumberOfElements2; j++)
    {
        cin >> array2[j];
    }
}
void OutPut(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)
{
    cout << "Set of data 1: ";
    for (int i = 0; i < NumberOfElements1; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;
    cout << "Set of data 2: ";
    for (int i = 0; i < NumberOfElements2; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
}