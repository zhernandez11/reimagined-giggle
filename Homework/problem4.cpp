/*
Write a C++ program that receives a text input containing multiple 
words and prints the last word of the text. For example, 
if the input is "This is the last word," the program should output "word."
*/
#include<iostream>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    string lastWord;
    for (int i = s1.length() - 1; i>= 0; i--){
        if(isalpha(s1[i])){
            int wordEnd = i;
            while (i >= 0 && isalpha(s1[i])){
                i--;
            }
            int wordStart = i + 1;
            lastWord = s1.substr(wordStart, wordEnd - wordStart + 1);
            break;
        }
    }
    cout << lastWord << endl;
}