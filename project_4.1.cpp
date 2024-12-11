

#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    cin >> a;
    cout << "\nEnter b: ";
    cin >> b;
    cout << "\n One of the numbers is odd" << boolalpha << (a % 2 != 0 || b % 2 != 0) << endl;

    return 0;

}

