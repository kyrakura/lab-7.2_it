#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 7,2_it/lab 7.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 3;
            int** a = new int* [n];
            for (int i = 0; i < n; i++) {
                a[i] = new int[n];
            }
            int Low = 7;
            int High = 65;
            Create(a, n, Low, High);
            for (int i = 0; i < n; i++) {
                delete[] a[i];
            }
            delete[] a;
        }
    };
}
