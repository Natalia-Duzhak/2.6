
//Equilateral.ccp
#include "Equilateral.h"
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;
void Equilateral::Triangle::SetAB(double value)
{
	if (value > 0)
		a = value;
	else
		a = 0;
}

void Equilateral::Triangle::SetBC(double value)
{
	if (value > 0)
		b = value;
	else
		b = 0;
}

void Equilateral::Triangle::SetAC(double value)
{
	if (value > 0)
		c = value;
	else
		c = 0;
}
Equilateral::Triangle::Triangle()
{
	a = 0;
	b = 0;
	c = 0;
}
Equilateral::Triangle::Triangle(double a = 0, double b = 0, double c = 0)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		SetAB(a);
		SetBC(b);
		SetAC(c);

	}
	else
	{
		SetAB(0);
		SetBC(0);
		SetAC(0);

	}

}
Equilateral::Triangle::Triangle(const Equilateral::Triangle& A)
{
	a = A.a;
	b = A.b;
	c = A.c;
}
Equilateral::Triangle& Equilateral::Triangle::operator = (const Triangle& A)
{
	this->a = A.a;
	this->b = A.a;
	this->c = A.a;

	return *this;
}
ostream& operator << (ostream& out, const Equilateral::Triangle& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Equilateral::Triangle& A)
{
	cout << "a = "; in >> A.a;
	cout << "b = "; in >> A.b;
	cout << "c = "; in >> A.c;
	return in;
}
Equilateral::Triangle::operator string() const
{
	stringstream sout;
	sout << "a = " << a << endl;
	sout << "b = " << b << endl;
	sout << "c = " << c << endl;
	return sout.str();
}
Equilateral::Triangle& Equilateral::Triangle::operator ++ ()
{
	a++;
	return *this;
}
Equilateral::Triangle& Equilateral::Triangle::operator -- ()
{
	a--;
	return *this;
}
Equilateral::Triangle Equilateral::Triangle::operator ++ (int)
{
	Triangle t(*this);
	a++;
	return t;
}
Equilateral::Triangle Equilateral::Triangle::operator -- (int)
{
	Triangle t(*this);
	a--;
	return t;
}
double Equilateral::Triangle::A()
{
	double A;
	A = acos(((b * b) + c * c - a * a) / (2 * c * b));
	return A;
}
double Equilateral::Triangle::B()
{
	double B;
	B = acos(((a * a) + c * c - b * b) / (2 * c * a));
	return B;
}
double Equilateral::Triangle::C()
{
	double C;
	C = acos(((b * b) + a * a - c * c) / (2 * a * b));
	return C;
}

double Equilateral::Triangle::Perimeter()
{
	return a + b + c;
}
Equilateral::Triangle::~Triangle(void)
{}
// class Equilateral
////////////////////
int Equilateral::counter = 0;
int Equilateral::getCounter()
{
	return Equilateral::counter;
}
void Equilateral::SetAB(double value)
{
	if (value > 0)
		triangle.SetAB(value);
	else
		triangle.SetAB(0);
}

void Equilateral::SetBC(double value)
{
	if (value > 0)
		triangle.SetBC(value);
	else
		triangle.SetBC(0);
}

void Equilateral::SetAC(double value)
{
	if (value > 0)
		triangle.SetAC(value);
	else
		triangle.SetAC(0);
}

Equilateral::Equilateral(double a = 0 , double b = 0, double c = 0)
:triangle(a,b,c)
{
	if ((a == b) && (a == c) && (b == c))
	{

		SetAB(a);
		SetBC(b);
		SetAC(c);
	}
	else
	SetAB(0);
	SetBC(0);
	SetAC(0);
	Equilateral::counter++;
}
Equilateral::Equilateral(const Equilateral& A)
	:triangle(0,0,0)
{ 
	triangle = A.triangle;
	
	Equilateral::counter++;
}
Equilateral& Equilateral::operator = (const Equilateral& A)
{
	triangle = A.triangle;

	return *this;
}
ostream& operator << (ostream& out, const Equilateral& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Equilateral& A)
{
	double a, b, c;
	cout << "a = "; in >> a;
	A.SetAB(a);
	cout << "b = "; in >> b;
	A.SetBC(b);
	cout << "c = "; in >> c;
	A.SetAC(c);
	return in;
}
Equilateral::operator string() const
{
	return string();
}


Equilateral& Equilateral::operator ++ ()
{
	triangle++;
	return *this;
}
Equilateral& Equilateral::operator -- ()
{
	triangle--;
	return *this;
}
Equilateral Equilateral::operator ++ (int)
{
	Equilateral t(*this);
	triangle++;
	return t;
}
Equilateral Equilateral::operator -- (int)
{
	Equilateral t(*this);
	triangle--;
	return t;
}

double Equilateral::Square() const
{
	double a = triangle.GetAB();
	double S = (a * a * sqrt(3) * 1.) / 4;
	return S;
}
Equilateral::~Equilateral(void)
{
	Equilateral::counter--;
}

