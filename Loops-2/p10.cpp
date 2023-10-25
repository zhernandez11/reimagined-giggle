//Create a program that asks the user to enter a string and a character. 
//Then, use a `for` loop to count and display the number of occurrences of that character in the string.
#include<iostream>
using namespace std;
int main(){
    string Str;
    getline (cin, Str);
    char x;
    cin >> x;
    int counter = 0; 
    for (int i = 0; i <= Str.length() ; i++){
        if (Str[i] == x || Str[i] == (x - 32)){
            counter++;
        }
    }
    cout << x << " ocuured " << counter << " times." << endl;
}
// ch = (ch <= 122 and ch >= 97) ? ch - 32 : ch;