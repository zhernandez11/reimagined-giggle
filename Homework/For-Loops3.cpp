//Write a C++ program to receive a text and check if the text includes the string 'abc' as 
//part of the sentence or any of its words.
//Example: Input: "The magic of abcd is amazing." Output: "abc found"
#include<iostream>
using namespace std; 
int main(){
    string text;
    getline(cin, text);
    string target = "abc";
    string word;
    bool found = false;
    for (int i = 0; i < text.length(); i++){
        if (text[i] == ' '){
            if (word == target){
                found = true;
                break;
            }else{
                word = "";
            }
        }else{
            word += text[i];
        }
    }
    if(found){
        cout << target << " was found." << endl;
    }else {
        cout << target << " was not found." << endl;
    }
}