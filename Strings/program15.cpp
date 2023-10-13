//Write a program that reverses the order of the words in given text string that has words separated by space characters.
// For example, if the input is "hello world of c++" the program should output "c++ of world hello".
#include<iostream>
using namespace std;

int main(){
    string s;
    string res;
    string newrd;
    getline(cin, s);
    int i = 0;
    while (i < s.length()){
        if(s[i] == ' '){
            res = newrd + ' ' + res;
            newrd = "";
        }else{
            newrd += s[i];
        }
        i++;
    }
    res = newrd + ' ' + res;
    cout << res << endl;
}
