

#include "Caesar.hpp"



	// constructor to set shift value
	Caesar::Caesar(int shifts) : shifts(shifts % 26) {} // makes sure the range is correct alpha

	string Caesar:: encode(string& msg) {

		string result = "";

		for (char b : msg) {

			if (isalpha(b))
			{
				char base = isupper(b) ? 'A' : 'a';

				result += (b - base + shifts) % 26 + base;
			}
			else {
				result += b;
			}
		}
		return result;

	}

	// Implemt for decode

	string Caesar::decode(string& msg) {

		string result = ""; // empty string

		for (char b : msg) {

			if (isalpha(b)) { // isalpha returns true if characters are a-z

				char base = isupper(b) ? 'A' : 'a';

				result += (b - base - shifts + 26) % 26 + base;

			}
			else
			{
				result += b;
			}

		}
		return result;
	}

	// complete this class for bonus credit!!!
	// you must use the basic Caesar Cipher algorithms
	// to override the encode () / decode () from
	// the abstract Cipher class





