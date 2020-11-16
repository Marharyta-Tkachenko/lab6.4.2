#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			double a[4]{ 1.4,1.3,-0.14,1.8 };
			c = Min(a, 4, 0, 0);
			Assert::AreEqual(c, -0.14);
		}
	};
}