#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2.6/Equilateral.h"
#include "../Project2.6/Equilateral.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Equilateral::Triangle z(0, 0, 0);
			double k = 0;
			k = z.Perimeter();
			Assert::AreEqual(0,0);
		}
	};
}
