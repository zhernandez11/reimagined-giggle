//Create a C++ program that uses a `while` loop to repeatedly ask the user for a positive integer until they enter a negative number.
// Keep track of how many positive integers were entered and display that count at the end.
#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int num;
    cout << "Enter a positive integer or enter a negative integer to exit: ";
    cin >> num;
    while (num >= 0){
        count++;
        cout << "Enter a positive integer or enter a negative integer to exit:";
        cin >> num; 
    }
    cout << "You entered " << count << " positive integers./n";
}