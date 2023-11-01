//Write a program that takes a string as input and uses a loop to remove all spaces from the string. Display the modified string.
#include<iostream>
using namespace std;
int main(){
    string str1;
    getline(cin, str1);
    string result;
    for (int i = 0; i <= str1.length(); i++){
        if(str1[i] != ' '){
            result += str1[i];
        }
    }
    cout << result << endl;
}