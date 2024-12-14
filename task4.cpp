#include <iostream>
using namespace std;

void weekDays()
{
    int number;
    do
    {
        cout << "Enter a number between 1 - 7: ";
        cin >> number;

        switch (number)
        {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        case 8:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Enter a number between 1-7!\n";
            break;
        }

    } while (number != 8);
}

int main()
{
    weekDays();
    return 0;
}