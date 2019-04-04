#pragma once
#include <string>
#include <map>

using std::string;
using std::map;

namespace ArabicToRomanServices {

	map<int, string> symbol = { {1000,"M"},{900,"CM"},{500,"D"},{400, "CD"},
								{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
								{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},
								{1,"I"} };

	int levels[] = { 1000,900,500,400,
					100,90,50,40,
					10,9,5,4,
					1 };

	string ToRoman(int anArabic) {

		string result = string();

		for (const int &level : levels) {

			do {
				if (anArabic >= level) {
					result += symbol[level];
					anArabic -= level;
				}
			} while (anArabic >= level);
		}

		return result;
	}
}