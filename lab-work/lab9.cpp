//Develop a C++ program that uses a `while` loop to repeatedly ask the user for a number and adds it to a running total.
// The loop should continue until the user enters 0. After exiting the loop, display the total.
#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int num;
    int total = 0;
    cout << "Enter any number or enter 0 to see the total sum of your numbers: ";
    cin >> num;
    while (num > 0){
        total += num;
        cout << "Enter any number or enter 0 to see the total sum of your numbers: ";
        cin >> num;
    }
    cout << total << " this is the total sum of your numbers.\n";
}