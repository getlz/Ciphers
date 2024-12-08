#include "SubstitutionCipher.hpp"
#include <algorithm>
#include <cctype>

Sub::Sub(){}

std::string Sub::encode(std::string& msg) {

	string result = "";

	for (char b : msg) {

		if (isalpha(b))
		{
			char base = isupper(b) ? 'A' : 'a';
			int index = toupper(b) - 'A';



			result += isupper(b) ? toupper(alphabet[25 - index]) : alphabet[25 - index];
		}
		else {
			result += b; // no non alphabet characters change
		}
	}
	return result;


}

std::string Sub::decode(std::string& msg) { return encode(msg); } // same as encode