//Write a program that reverses a given text string. For example, if the input is "hello," the program should output "olleh."
#include<iostream>
using namespace std;
int main(){
    string s1;
    getline(cin, s1);
    int i = 0;
    string s2;
    while (i <= s1.length()){
        s2 = s1[i] + s2;
        i++;
    }
    cout << s2 << endl;
}