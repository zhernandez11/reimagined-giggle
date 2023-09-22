/*
Create a program that asks the user for a number and uses a while loop to print the multiplication table for that number up to 10.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number you want the multiplication table of: ";
    cin >> num;
    int i = 1;
    while (i <= 10){
        cout << i * num << "\n";
        i++;
    }
}