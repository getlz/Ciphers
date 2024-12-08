#pragma once
#include <cmath>
#include <string>


#include "Cipher.hpp"

class Caesar : public Cipher
{
public:
	// constructor to set shift value

	Caesar(int shifts);

	//override encode & decoed

	string encode(string& msg) override;
	string decode(string& msg) override;



// complete this class for bonus credit!!!
// you must use the basic Caesar Cipher algorithms
// to override the encode () / decode () from
// the abstract Cipher class



private:
	int shifts; // store shift value private
};

