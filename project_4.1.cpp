

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
    ((a % 2 != 0) && (b % 2 == 0)) || ((b % 2 != 0) && (a % 2 == 0)) ? cout  << "�������" : cout << "�����";*/
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "\n������ a: ";
    cin >> a;
    cout << "\n������ b: ";
    cin >> b;
    cout << "\n ���� � ����� �������  " << boolalpha << (a%2 != 0 || b%2 !=0) << endl;

    
   
    /*������ ��� ����� �����: A, B. ��������� ��������� �����������:
    �ҳ���� ���� � ����� A � B �������. */
}

