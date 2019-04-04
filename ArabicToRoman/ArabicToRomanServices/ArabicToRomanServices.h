#pragma once
#include <string>
#include <map>

using std::string;
using std::map;

namespace ArabicToRomanServices {

	map<int, string> symbol = {{10,"X"},{1,"I"}};

	int levels[] = {10, 1};

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
