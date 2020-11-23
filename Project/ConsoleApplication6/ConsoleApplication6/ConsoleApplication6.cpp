// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "windows.h"
#include <iostream>
#include "stdio.h";
#define _USE_MATH_DEFINES   
#include <math.h> 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x;
    printf("¬вед≥ть значенн€ х: ");
    scanf_s("%lf", &x);
    double b;
    b = double(((4 * pow(sin(x), 3)) / (pow(1 + tan(5 * x), 2)) + sin(80 * M_PI / 180)));
    printf("b=%lf", b);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
