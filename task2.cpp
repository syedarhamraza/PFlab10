#include <iostream>
using namespace std;

void checkNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0)
    {
        cout << "Number is Positive\n";
    }
    else
    {
        cout << "Number is negetive\n";
    }
}

void evenOdd()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "The number is Even!\n";
    }
    else
    {
        cout << "The number is odd\n";
    }
}

int main()
{
    checkNumber();
    evenOdd();
    return 0;
}