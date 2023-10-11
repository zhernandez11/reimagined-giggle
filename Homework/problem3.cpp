/*
Develop a C++ program that accepts a text input with multiple words 
and prints the index (location) of the first word that starts with the character 'a'. 
If there is no word starting with 'a', the program should print "not found."
*/
#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a text with multiple words: ";
    getline(cin, input);

    size_t startIndex = 0;
    size_t wordIndex = 0;  
    bool found = false;    

    for (size_t i = 0; i < input.length(); ++i) {
        while (i < input.length() && !isalpha(input[i])) {
            ++i;
        }

        if (i < input.length()) {
            startIndex = i;
            if (toupper(input[i]) == 'A') {
                found = true;
                break;
            }
            while (i < input.length() && isalpha(input[i])) {
                i++;
            }

            wordIndex++;
        }
    }

    if (found) {
        cout << "First word starting with 'a' found at index " << wordIndex << endl;
    } else {
        cout << "Not found." << endl;
    }
}

