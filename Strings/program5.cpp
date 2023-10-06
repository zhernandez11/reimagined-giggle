//Create a program that takes a text input from the user and prints out the first, second, and last characters of the input.
#include<iostream>
using namespace std;
int main(){
    string str1;
    getline(cin, str1);
    int x = str1.length();
    cout << str1[0] << " " << str1[1] << " " << str1[x - 1] << endl;


}