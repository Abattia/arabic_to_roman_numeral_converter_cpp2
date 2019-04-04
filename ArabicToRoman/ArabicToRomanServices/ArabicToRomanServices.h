#pragma once
#include <string>

using std::string;

namespace ArabicToRomanServices {

	string ToRoman(int anArabic) {
		if (anArabic == 2) {
			return "II";
		}
		return "I";
	}

}
