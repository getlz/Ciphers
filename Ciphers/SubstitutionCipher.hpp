#pragma once



#include "Cipher.hpp"
#include <string>


class Sub : public Cipher {

public :
	Sub();

	std::string encode(string& msg) override;

	std::string decode(string& msg) override;

private: 

	std::string alphabet = "abcdefghijklmnopqrstuvwxyz";






};