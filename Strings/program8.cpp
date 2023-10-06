//Create a C++ program that asks the user to enter a text string and a search term. Use the find function to check if the search term is present in the input string.
// Print a message indicating whether the search term was found or not. You can use str.find(str2) to get the location of str2 in the str. 
#include<iostream>
using namespace std;
int main(){
    string str1;
    getline(cin, str1);
    cout << "Enter a term you want to find: ";
    string str2;
    cin >> str2;
    int found = str1.find(str2);
    if(found != string::npos){
        cout << "Found" << endl; 
        cout << found << endl; 
    }else {
        cout << "Not found" << endl;
        cout << found << endl;
    }
}