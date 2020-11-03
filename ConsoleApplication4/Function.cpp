#include "Function.h"
#include <iostream>
#include <algorithm>
using namespace std;
void Intersection(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2)  //Returns data that intersects in both arrays 
{
    int intersection[100]; //declaring a local int array
    int counter = 0; //declaring a local counter of type int
    for (int i = 0; i < NumberOfElements1; i++) //the cycle goes through every element of the first array
    {
        for (int j = 0; j < NumberOfElements2; j++) //the cycle goes through every element of the second array
        {
            if (array1[i] == array2[j]) //checks if both element are the same
            {
                intersection[counter++] = array1[i]; //if true the data is written into the intersection array
            }
        }
    }
    sort(intersection, intersection + counter); //sorts the data from the intersection array from small to big
    cout << "The intersection between the two sets of data: ";
    for (int i = 0; i < counter; i++) // Cycles from zero the the value of counter variable
    {
        cout << intersection[i] << " "; //Prints the elements of the intersection array
    }
    cout << endl;
}
void Union(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) //Returns a collection of sets of all elements in both collections
{
    int unification[100]; //declaring a local int array
    int counter = 0; //declaring a local counter of type int
    int found = 0; //declaring a local signal of type int
    for (int i = 0; i < NumberOfElements1; i++) //the cycle goes through every element of the first array
    {
        found = 0;
        for (int j = 0; j < counter; j++) //cycles through every element from the unification array
        {
            if (unification[j] == array1[i]) //checks if the elements are the same
            {
                found = 1; //signals if the elements are the same 
            }
        }
        if (found == 0) //checks if it has found something
        {
            unification[counter++] = array1[i]; //counter goes up and the data from array1 is written to the unification array
        }
    }
    for (int i = 0; i < NumberOfElements2; i++) //the cycle goes through every element of the second array
    {
        found = 0;
        for (int j = 0; j < counter; j++) //cycles through every element from the unification array
        {
            if (unification[j] == array2[i]) //checks if the elements are the same
            {
                found = 1; //signals if the elements are the same
            }
        }
        if (found == 0) //checks if the cycle has found something
        {
            unification[counter++] = array2[i]; //counter goes up and the data from array2 is written to the unification array
        }
    }
    cout << "Unification of the two sets of data: "; //Prints message in the console
    sort(unification, unification + counter); //sorts the data from the unification array from small to big
    for (int i = 0; i < counter; i++) // Cycles from zero the the value of counter variable
    {
        cout << unification[i] << " "; //Prints the elements of the unification array
    }
    cout << endl;
}
void SymetricDifference(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) // find the symetric difference of the sets of data
{
    int symetry[100]; //declaring a local int array
    int counter = 0; //declaring a local counter of type int
    int found = 0;  //declaring a local signal of type int
    for (int i = 0; i < NumberOfElements1; i++) //the cycle goes through every element of the first array 
    {
        found = 0;
        for (int j = 0; j < NumberOfElements2; j++) // cycles from zero to NumberOfElements2
        {
            if (array1[i] == array2[j]) //checks if the elements are the same
            {
                found++; //signals if the elements are the same
            }
        }
        if (found == 0) //checks if the cycle has found something
        {
            symetry[counter++] = array1[i]; // the data from array1 is written in the symetry array(and the counter goes +1 every time)
        }
    }
    for (int j = 0; j < NumberOfElements2; j++) //the cycle goes through every element of the second array
    {
        found = 0;
        for (int i = 0; i < NumberOfElements1; i++) // cycles from zero to NumberOfElements1
        {
            if (array2[j] == array1[i]) //checks if the elements are the same
            {
                found++; //signals if the elements are the same
            }
        }
        if (found == 0) //checks if the cycle has found something
        {
            symetry[counter++] = array2[j]; // the data from array2 is written in the symetry array(and the counter goes +1 every time)
        }
    }
    cout << "The Symetric diffrence between the two sets of data: "; //Prints message in the console
    cout << counter << endl;
    for (int i = 0; i < counter; i++) // cycles from zero to counter
    {
        cout << symetry[i] << " "; // Prints out the elements in the symetry array
    }
    sort(symetry, symetry + counter); //sorts the data from the symetry array from small to big
    cout << endl;
}
void PrimeNumbers(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) //declares a function that returns all prime numbers in the first array
{
k: // marks a checkpoint
    int counter = 0; //declaring a local counter of type int
    cout << "Wich array do you want to work with?" << endl; //Prints message in the console
    cout << "Array1 - 1 \nArray2 - 2\n"; //Prints message in the console
    cout << "Choose : "; //Prints message in the console
    int n; // declaring a local variable of type int
    cin >> n; //User input 
    cout << endl;
    if (n == 1) // checks if it is the first or the second array(based on user input)
    {
        cout << "The prime numbers in the first set of data are: "; //Prints message in the console
        for (int i = 0; i < NumberOfElements1; i++) //the cycle goes through every element of the first array
        {
            bool prime = true; // declaring a boolean variable
            for (int j = 2; j * j <= array1[i]; j++) //cycles until it checks every possible devider of a certain element
            {
                if (array1[i] % j == 0) //checks if the elements in array1 are prime
                {
                    prime = false; // signals that the element is not prime
                    break; // stops the cycle
                }
            }
            if (array1[i] == 1) // one is not a prime number
            {
                prime = false; // signals that one is not a prime number
            }
            if (prime) cout << array1[i] << " "; //If prime is true then it prints the prime numbers of array1
        }
        sort(array1, array1 + counter); //sorts the data from array1 from small to big
        cout << endl << endl << endl;

    }
    else if (n == 2) // checks if it is the first or the second array(based on user input)
    {
        cout << "The prime numbers in the second set of data are: "; //Prints message in the console
        for (int i = 0; i < NumberOfElements1; i++) // cycles from zero to NumberOfElements1
        {
            bool prime = true;
            for (int j = 2; j * j <= array2[i]; j++) //cycles until it checks every possible devider of a certain element
            {
                if (array2[i] % j == 0) //checks if the elements in array1 are prime
                {
                    prime = false; // signals that the element is not prime
                    break; // stops the cycle
                }
            }
            if (array2[i] == 1) // one is not a prime number
            {
                prime = false; //signals that one is not a prime number
            }
            if (prime) cout << array2[i] << " "; //If prime is true then it prints the prime numbers of array2
        }
        sort(array2, array2 + counter); // sorts array2 from small to big
        cout << endl << endl << endl;
    }
    else // if it's neither 1 or 2
    {
        cout << "Incorrect input! Please try again!"; //Prints message in the console
        goto k; // goes to checkpoint
    }
    cout << "-----------------------------------------------" << endl << endl << endl;
}
void Input(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) // declaring a function that will input the elements of both arrays
{
    cout << "Select the length of the first array: "; //Prints message in the console
    cin >> NumberOfElements1; // User input
    cout << "Insert the numbers of the first array: "; //Prints message in the console
    for (int i = 0; i < NumberOfElements1; i++)
    {
        cin >> array1[i]; // User input
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Select the length of the second array: "; //Prints message in the console
    cin >> NumberOfElements2;
    cout << "Insert the numbers of the second array: "; //Prints message in the console
    for (int j = 0; j < NumberOfElements2; j++) // cycles from zero to NumberOfElements2
    {
        cin >> array2[j]; // User input
    }
}
void OutPut(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) // Declaring a function that prints out the elements of both arrays
{
    cout << "Set of data 1: ";
    for (int i = 0; i < NumberOfElements1; i++) // cycles from zero to NumberOfElements1
    {
        cout << array1[i] << " "; // Prints out all elements of the array1
    }
    cout << endl;
    cout << "Set of data 2: ";
    for (int i = 0; i < NumberOfElements2; i++) // cycles from zero to NumberOfElements2
    {
        cout << array2[i] << " "; // Prints out all elements of the array2
    }
    cout << endl;
}
bool Menu(int* array1, int& NumberOfElements1, int* array2, int& NumberOfElements2) // declaring a function that combines all functions
{
    int n; // declaring a variable of type int
    if (bigcheck == 0) // checks if this is the first time the program has been run
    {
        cout << "Before starting, please input the two sets of data you want to work with!" << endl; //Prints message in the console
        Input(array1, NumberOfElements1, array2, NumberOfElements2); // calling a function that inputs the element in the array
        bigcheck++; // signals that the first time the program has been run is over
    }
    cout << "-----------------------------------------------" << endl; //Prints message in the console
    cout << "LIST OF FUNCTIONS" << endl;
    cout << "1. Input new sets of data" << endl;
    cout << "2. Find the intersection between the two sets of data" << endl;
    cout << "3. Find th union between the two sets of data" << endl;
    cout << "4. Find the symetric diffrence the two sets of data" << endl;
    cout << "5. Find the prime numbers in one of the set of data" << endl;
    cout << "6. Exit the program" << endl;
    //making a list of functions that the user can choose from
    cout << endl << endl;
    OutPut(array1, NumberOfElements1, array2, NumberOfElements2); // Displays the elements of both arrays
    cout << "-----------------------------------------------" << endl;
    cout << endl;
    cout << "Enter the number of the function you want to use: "; //Prints message in the console
    cin >> n; // letting the user choose the function he wants to use
    cout << "-----------------------------------------------" << endl << endl << endl;
    switch (n) // Based on the user input on row 236 it chooses the correct case
    {
    case 1:
    {
        Input(array1, NumberOfElements1, array2, NumberOfElements2); // calling the function Input
        return true; // continues the while cycle on row 289
    }
    case 2:
    {
        Intersection(array1, NumberOfElements1, array2, NumberOfElements2); // calling the function Intersection
        return true; // continues the while cycle on row 289
    }
    case 3:
    {
        Union(array1, NumberOfElements1, array2, NumberOfElements2); // calling the function Union
        return true; // continues the while cycle on row 289
    }
    case 4:
    {
        SymetricDifference(array1, NumberOfElements1, array2, NumberOfElements2); // calling the function SymetricDifference
        return true; // continues the while cycle on row 289
    }
    case 5:
    {
        PrimeNumbers(array1, NumberOfElements1, array2, NumberOfElements2); // calling the function PrimeNumbers
        return true; // continues the while cycle on row 289
    }
    case 6:
    {
        return false; // breaks the while on row 289
    }
    default:
    {
        cout << "Incorrect input. Please enter again." << endl; //Prints message in the console
        return true; // continues the while cycle on row 289
    }
    }
}
void Exit() // A message for Farewell
{
    cout << "Thank you for using our program!" << endl; //Prints message in the console
    cout << "Goodbye!" << endl << endl << endl; //Prints message in the console
}
void Greetings() // A greeting message
{
    cout << endl << endl << "Hello, Welcome to our project!" << endl << endl << endl; //Prints message in the console
}