#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			matrix<int> A(0,0), B(1,1),C(1,1);
			
			Assert::AreEqual(A[11], -3634177);
		}
	};
}
