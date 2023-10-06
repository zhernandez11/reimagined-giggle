//Write a program that asks the user for a positive integer and uses a `while` loop to calculate and print the sum of its digits.
#include<iostream>
using namespace std;
int main(){
    cout << "Enter a positive integer: ";
    int num;
    cin >> num;
    int sum = 0;
    while(num > 0){
        int digits = num % 10;
        sum += digits;
        num /= 10;
    }
    cout << sum << " is the sum of your numbers digits.\n";
}