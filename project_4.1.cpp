

#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;

int main()
{ 
    /*SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "Enter a, b:" << endl;
    cin >> a >> b;
    ((a % 2 != 0) && (b % 2 == 0)) || ((b % 2 != 0) && (a % 2 == 0)) ? cout  << "Непарне" : cout << "Парне";*/
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "\nВведіть a: ";
    cin >> a;
    cout << "\nВведіть b: ";
    cin >> b;
    cout << "\n Одне з чисел непарне  " << boolalpha << (a%2 != 0 || b%2 !=0) << endl;

    
   
    /*Задано два цілих числа: A, B. Перевірити істинність висловлення:
    «Тільки одне з чисел A і B непарне». */
}

