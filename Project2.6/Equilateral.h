// Equilateral.h
#pragma once
#include <string>

using namespace std;
class Equilateral
{
public:
	class Triangle
	{
	private:
		double a;
		double b;
		double c;
		static int counter;


	public:
		double GetAB() const { return a; }
		double GetBC() const { return b; }
		double GetAC() const { return c; }

		void SetAB(double value);
		void SetBC(double value);
		void SetAC(double value);

		Triangle();
		Triangle(double, double, double);
		Triangle(const Triangle&);

		Triangle& operator = (const Triangle&);
		friend ostream& operator << (ostream&, const Triangle&);
		friend istream& operator >> (istream&, Triangle&);
		operator string() const;

		Triangle& operator ++ ();
		Triangle& operator -- ();
		Triangle operator ++ (int);
		Triangle operator -- (int);

		~Triangle();


		double Perimeter();
		double A();
		double B();
		double C();

		static int getCounter();
	};

	double GetAB() const { return triangle.GetAB(); }
	double GetBC() const { return triangle.GetBC(); }
	double GetAC() const { return triangle.GetAC(); }

	void SetAB(double value);
	void SetBC(double value);
	void SetAC(double value);

	Equilateral(double, double, double);
	Equilateral(const Equilateral&);

	Equilateral& operator = (const Equilateral&);
	friend ostream& operator << (ostream&, const Equilateral&);
	friend istream& operator >> (istream&, Equilateral&);
	operator string() const;

	Equilateral& operator ++ ();
	Equilateral& operator -- ();
	Equilateral operator ++ (int);
	Equilateral operator -- (int);

	double Square() const;

	~Equilateral();


	static int getCounter();

private:
	Triangle triangle;
	double square;
	static int counter;
};

