//Create a C++ program that prompts the user for their name and displays a personalized welcome message.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Welcome " << name << ", how is your day today.\n";
}