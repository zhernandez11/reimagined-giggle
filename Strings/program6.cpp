//Write a program that receives a text input from the user, replaces its first character with "S", and then prints out the modified text.
#include<iostream>
using namespace std;
int main(){
    string str1;
    getline(cin, str1);
    str1[0] = 's';
    cout << str1 << endl;
}