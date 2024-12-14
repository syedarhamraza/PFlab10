#include <iostream>
using namespace std;

void sum()
{
    int a = 10, b = 20;
    int sum;
    sum = a + b;
    cout << sum << endl;
}

void sub()
{
    int a = 10, b = 20;
    int subtraction;
    subtraction = b - a;
    cout << subtraction << endl;
}

int main()
{
    sum();
    sub();
    return 0;
}