#include "pch.h"
#include "CppUnitTest.h"
#include "../ArabicToRomanServices/ArabicToRomanServices.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArabicToRomanTests
{
    TEST_CLASS(ArabicToRomanShould)
    {
    public:
        TEST_METHOD(ReturnIIWith2)
        {
			string result = ArabicToRomanServices::ToRoman(2);

			Assert::AreEqual(string("II"), result);
        }

		TEST_METHOD(ReturnIWith1)
		{
			string result = ArabicToRomanServices::ToRoman(1);

			Assert::AreEqual(string("I"), result);
		}
    };
}