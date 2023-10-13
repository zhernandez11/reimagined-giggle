//Write a program that receive a sentence and prints out length of the longest word in the string. The text has no punctuation and only words each separated by one space.
//Can you change the program to print out the longest word itself too? 
#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string wrd;
    string lngwrd;
    int i = 0;
    while (i < s.length()){
        if (s[i] == ' '){
            if (wrd.length() > lngwrd.length()){
                lngwrd = wrd;
            }
            wrd = "";
        }else{
            wrd += s[i];
        }
        i++;
    }
    if (wrd.length() > lngwrd.length()){
        lngwrd = wrd;
    }
    cout << lngwrd << endl;
}