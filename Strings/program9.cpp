// Write a program that takes a text string and a character as input and counts the number of occurrences of that character within the string.
#include<iostream>
using namespace std;
int main(){
    string s1;
    getline(cin, s1);
    cout << "Enter a character to see the amount of occurences: ";
    char c;
    cin >> c;
    int i = 0;
    int count = 0;
    while (i < s1.length()){
        if (s1[i] == c){
            count ++;
        }
        i++;
    }
    cout << count << endl;
}