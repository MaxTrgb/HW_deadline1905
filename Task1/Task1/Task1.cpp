/*Task1. Given a letter string that contains a sequence of characters s0, ...., sn, ... 
If the word is written after a period - then replace the first letter in this word with the corresponding capital letter.*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void capitalPeriod(char* myStr);

int main()
{
	// initialize array
	char myStr[100];
	fgets(myStr, sizeof(myStr), stdin);

	// function call
	capitalPeriod(myStr);

	// display result
	cout << myStr << endl;

	return 0;
}
void capitalPeriod(char* myStr) {

	// use bool to determinate if we need to capitalize
	bool capitalizeNext = true;

	for (int i = 0; i < strlen(myStr); i++) { // Loop to go through the array
		
		if (myStr[i] == '.') { // if char is period capitalizeNext is true

			capitalizeNext = true;
		}
		else if (capitalizeNext && isalpha(myStr[i])) { //capitalizeNext is true and isalpha (deteriminates whether the value is a letter of the alphabet or not) is true 

			myStr[i] = toupper(static_cast<unsigned char>(myStr[i])); // We use toupper function to get capitalized letter

			capitalizeNext = false; // next letter will not be capitalized
		}
	}
}
