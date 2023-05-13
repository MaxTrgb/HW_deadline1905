/*Task2. Given a letter string containing the sequence of characters sO, ..., Sn,
Calculate the length of the longest word in this composition.
A word is a group of characters that are located in a row and are different from spaces and punctuation marks.*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int longestWord(char* myStr);

int main()
{
	// initialize array
	char myStr[100];
	fgets(myStr, sizeof(myStr), stdin);

	// function call
	int longest = longestWord(myStr);

	// Display the number of chars in the longest word
	cout << longest << endl;

	return 0;
}
int longestWord(char* myStr) {

	// Initialize additional veriables
	int max = 0;
	int temp = 0;

	for (int i = 0; i < strlen(myStr); i++) { // Loop to go through the array

		if (isalpha(myStr[i])) { // Counting only alphabetic chars

			temp++;
		
			if (temp > max) { // Set max number of chars

				max = temp;
			}
		}	
		else { // If next value is not alphabetic clear counter
			temp = 0;
		}
	}
	return max; // Return maximum number of chars in 1 word
}