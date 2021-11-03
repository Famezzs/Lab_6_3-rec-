#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_3(rec)\Lab_6_3(rec)\Lab_6_3(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int a[n];
			a[0] = -7;
			a[1] = -12;
			a[2] = -17;

			Assert::AreEqual(MinElem(a, n, a[0], 1), -17);
		}
	};
}
