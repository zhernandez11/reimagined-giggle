//Write a program that calculates the factorial of a number using a while loop.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number you want the factorial of: ";
    cin >> num;
    int res = 1;
    int i = 1;

    while(i <= num ){
        res = res * i;
        i++;
    
    }
    cout << res << " is the factorial of your number.\n";
}