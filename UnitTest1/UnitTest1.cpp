#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3/FileName.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSort
{
    TEST_CLASS(UnitTestSort)
    {
    public:

        TEST_METHOD(TestSortFunction)
        {
            const int SIZE = 10;
            int arr[SIZE] = { 9, 3, 7, 5, 8, 8, 5, 7, 4, 11 };
            int expected[SIZE] = { 3, 4, 5, 5, 7, 7, 8, 8, 9, 11 };

            Sort(arr, SIZE);

            
            for (int i = 0; i < SIZE; i++) {
                Assert::AreEqual(expected[i], arr[i]);
            }
        }

        

       
    };
}
