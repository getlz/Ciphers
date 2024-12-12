// This example is intended to provide a quick
// review of inheritance and polymorphism. It works
// with ciphers.
// 
// Name: Mauricio Castaneda 1
// 
// NOTE: this is another bonus opportunity!!! Complete the code by creating two
//       derived classes. One for Caesar Cipher and 
//       one for another Substitution Cipher of your choice. You need to 
//       also run tests to illustrate that the encode and decode algorithms work.
//       send your solution to aofallon@wsu.edu by no later than
//       Friday, December 13. be sure to remove all debug, x64, and release
//       folders before you zip and attach your solution to the email.

// History: 11/8/24 - Set up the base class Cipher for two other classes to derive from it.
//                    Cipher is considered an abstract class (one that can't be instantiated)
//                    because it has at least one pure virtual function. We're really setting
//                    this up to be an interface like class.

#include "Caesar.hpp"
#include "SubstitutionCipher.hpp"

int main(void)
{
	//Cipher c; // can't instantiate because it's an abstract class

	Caesar caeserCipher(3);  // SHIFT 3 

	std::string message = "\n cpts 122 is a fun class";

	std::string encodedCaeser = caeserCipher.encode(message);

	std::string decodedCipher = caeserCipher.decode(encodedCaeser);


	//Display results shift 3 ->

	std::cout << "--------Original Message-------- " << message << std::endl;
	//what exaclty does encoded do??
	std::cout << "\n Encoded Message Caeser Cihper " << encodedCaeser << std::endl;
	// so whats exaclty does decode do??
	std::cout << "\n Decoded Message Caeser Cipher " << decodedCipher << std::endl;


	Sub Substitution;// create the substitution

	std::string encodedSub = Substitution.encode(message);

	std::string decodedSub = Substitution.decode(encodedSub);

	//Display


	std::cout << "\n Encoded  Message <Substitution Cipher> " << encodedSub <<std:: endl;

	std::cout << "\n Decoded Message <Substitution Cipher> " << decodedCipher << std::endl;


	return 0;
}



