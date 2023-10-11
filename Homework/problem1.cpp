/*
Create a C++ program that takes a text input containing two words 
and replaces all the characters of the second word with '*'. 
For example, if the input is "hello world," the program should output "hello *****."
*/
#include<iostream>
using namespace std;

int main(){
    string s1;
    getline(cin, s1);
    size_t spacePos = s1.find(' ');
    if(spacePos != string::npos && spacePos < s1.length() - 1){
        string w1 = s1.substr(0, spacePos);
        string w2 = s1.substr(spacePos + 1);

        for(size_t i = 0; i < w2.length(); i++){
            w2[i] = '*';
        }
        cout << w1 << " " << w2 << endl;
    }
}