#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.6/B1.h"
#include "../oop_laba_3.6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest36
{
	TEST_CLASS(oopUnitTest36)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 3;
			B1 b(a);
			Assert::AreEqual(a, b.get_b1());
		}
	};
}
