//Source.ccp
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "Equilateral.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Equilateral::Triangle a;

	cout << "Вивід значень: " << endl;
	cin >> a;
	cout << a; 

	cout << "A = " <<a.A() << endl;
	cout << "B = " << a.B() << endl;
	cout << "C = " << a.C() << endl;
	cout << "Perimeter = " << a.Perimeter() << endl;



	Equilateral e(4,4,4);
	
	cout << "Вивід значень: " << endl;
	double S = e.Square();
	cout << "Square = " << S << endl;


	cout << "a++" << endl;
	cout << a++ << endl;

	cout << "a--" << endl;
	cout << a-- << endl;

	cout << "++a" << endl;
	cout << ++a << endl;

	cout << "--a" << endl;
	cout << --a << endl;
}