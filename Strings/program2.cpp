//Develop a program that takes two strings as input from the user, concatenates them, and displays the resulting concatenated string.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter two words that can be concatenated: ";
    string first, second;
    cin >> first >> second;
    string third = first + " " + second;
    cout << third << "\n";
}

