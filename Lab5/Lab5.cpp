#include <iostream>
using namespace std;

void zadanie1();
void convertToBinary(int number);

void zadanie2();
int NWD(int a, int b);

void zadanie3();
int Fibonacci(int a);

void zadanie4();
int silnia(int n);

void zadanie5();
double fun(double a);

int main()
{
    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
    zadanie5();
}

// ZADANIE 1
void zadanie1()
{
    int number;
    cin >> number;
    convertToBinary(number);
}

void convertToBinary(int number)
{
    if (number <= 0)
    {
        cout << "0";
    }
    else
    {
        convertToBinary(number / 2);
        cout << number % 2;
    }
}

// ZADANIE 2
void zadanie2()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << NWD(n1, n2);
}

int NWD(int a, int b)
{
    if (a != b)
    {
        return NWD(
            a > b ? a - b : a,
            b > a ? b - a : b
        );
    }
    else
    {
        return a;
    }
}

// ZADANIE 3
void zadanie3()
{
    int number;
    cin >> number;
    cout << Fibonacci(number);
}

int Fibonacci(int a)
{
    if (a == 0) return 0;
    if (a == 1) return 1;

    return Fibonacci(a - 1) + Fibonacci(a - 2);
}

// ZADANIE 4
void zadanie4()
{
    int number;
    cin >> number;
    cout << silnia(number);
}

int silnia(int n)
{
    if (n > 1)
        return n * silnia(n - 1);
    else
        return 1;
}

// ZADANIE 5
void zadanie5()
{
    double number;
    cin >> number;
    cout << fun(number);
}

double fun(double n)
{
    if (n == 1) return 0;
    if (n == 2) return 0.5;

    if(n > 2)
        return (-fun(n - 1)) * fun(n - 2);
}
