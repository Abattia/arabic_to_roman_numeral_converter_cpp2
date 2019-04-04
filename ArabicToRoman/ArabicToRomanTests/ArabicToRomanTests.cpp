#include "pch.h"
#include "CppUnitTest.h"
#include "../ArabicToRomanServices/ArabicToRomanServices.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArabicToRomanTests
{
    TEST_CLASS(ArabicToRomanShould)
    {
	public:
		TEST_METHOD(ReturnMMDCCXLIXWith2749)
		{
			string result = ArabicToRomanServices::ToRoman(2749);

			Assert::AreEqual(string("MMDCCXLIX"), result);
		}

		TEST_METHOD(ReturnXWith10)
		{
			string result = ArabicToRomanServices::ToRoman(10);

			Assert::AreEqual(string("X"), result);
		}

		TEST_METHOD(ReturnIIIWith3)
		{
			string result = ArabicToRomanServices::ToRoman(3);

			Assert::AreEqual(string("III"), result);
		}

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