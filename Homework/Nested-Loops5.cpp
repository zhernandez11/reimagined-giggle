//First Rank: Create a program that receives a sentence from the user, including 
//a set of first names separated by space, and prints out the name that would show
// up first in alphabetical order. You cannot assume no two names in the list share 
//the same first character. Example: 
//if the input is "John Lauren Ashton Nicholas Ava," the output should be "Ashton."
#include<iostream>
using namespace std;
int main(){
    string names;
    getline (cin, names);
    string first;
    string current;;
    bool newW = true;
    char space = ' ';
    for (char c : names){
        if ( c == ' '){
            newW = true;
        }
        if (newW){
            current = c;
            newW = false;
        }else{
            current += c;
        }
        if (current < first ){
            first = current;
        }
    }
    cout << first << endl; 
}