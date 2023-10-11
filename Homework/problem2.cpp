/*
Write a C++ program that receives a text input and produces its abbreviation.
The abbreviation should consist of the initials of each word in the input text. 
For instance, if the input is "Computer Science Saddleback College," 
the program should output "CSSC."
*/
#include <iostream>
using namespace std;

string GetAbbreviation(const string& input) {
    string abbreviation = "";

    for (size_t i = 0; i < input.length(); ++i) {
        if (isalpha(input[i])) {
            abbreviation += toupper(input[i]);
            while (i < input.length() - 1 && isalpha(input[i + 1])) {
                ++i;
            }
        }
    }
    return abbreviation;
}
int main() {
    string s1;
    cout << "Enter a text: ";
    getline(cin, s1);
    string abbreviation = GetAbbreviation(s1);
    cout << "Abbreviation: " << abbreviation << endl;
}
