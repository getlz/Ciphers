#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

// for the bonus credit you can't modify this class. it must
// remain abstract with the provided members.

class Cipher // officially an abstract class because at least 1 pure virtual function
{
public:
	virtual string encode(string& msg) = 0; // pure virtual - Cipher is now considered an abstract class
	virtual string decode(string& msg) = 0; // pure virtual

private:
};