// Lab_02.3.cpp
// <Данилевич Данило>
// <Лабораторная работа №2>
// Лінійні програми
// Варіант 0.3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double Pi = 4 * atan(1.); // число Пі
    double a; // вхідний параметр
    double z1; // резільтат обчислення 1-го виразу
    double z2; // резільтат обчислення 2-го виразу
    cout << "a = "; cin >> a;
    z1 = pow(cos(3.0/8 * Pi - a/4), 2)
     - pow(cos(11.0/8 * Pi + a/4), 2);
    z2 = sqrt(2.0)/2.0 * (sin(a/2));
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "hello world" << endl;
    cout << "Hello c++" << endl;
    cin.get();
    return 0;
}