//Write a program that reverses the order of the two words in given text string that has two words separated by a space character.
// For example, if the input is "hello world" the program should output "world hello".
#include<iostream>
using namespace std;
 
int main(){
    string s;
    getline(cin, s);
    string w1;
    string w2;
    int i = 0;
    int currentW = 1;
    while(i < s.length()){
        if (s[i] == ' '){
            currentW = 2;
        }
        if(currentW == 1 ){
            w1 = w1 +s[i];
        }else if( currentW == 2){
            w2 += s[i];
        }
        i++;
    }
    cout << w2 + ' ' + w1 << endl;
}