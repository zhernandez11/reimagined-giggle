//Write a C++ program that receives a text and prints out all the 
//letters in the text that have only appeared once.
//Example: Input: "hello world" Output: "h e r d w"
#include<iostream>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    int letterFrequency[128] = {0};
    for (char c : text){
        letterFrequency[static_cast<int>(c)]++;
    }
    cout << "These letters only appeared once: ";
    for (char c : text){
        if (letterFrequency[static_cast<int>(c)] == 1){
            cout << c << ' ';
            letterFrequency[static_cast<int>(c)] = 0;
        }
    }
    cout << endl;
}

