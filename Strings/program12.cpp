//Develop a program that checks if a given text string is a palindrome. A palindrome is a word, phrase, or sequence that reads the same backward as forward. 
//Can you write the same program to check if a given text is a palindrome ignoring spaces and punctuation?
#include<iostream>
using namespace std;
int main(){
    string s1;
    getline(cin, s1);
    int i = 0;
    int j = s1.length() - 1;
    bool Equal = true;
    while (i < j){
        if (s1[i] != s1[j]){
            Equal = false;
        }
        i++;
        j--;
    }
    if(Equal){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }
}