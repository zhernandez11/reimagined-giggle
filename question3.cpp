//Create a program that asks the user for a positive integer `n` and uses a `while` loop to calculate and print the product of all numbers from 1 to `n`.
#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    int i = 1;
    int total = 1;
    while (i <= num){
        total = total * i;
        i++;
    }
    cout << "The of all number from 1 to " << num << " is " << total << ".\n";
}