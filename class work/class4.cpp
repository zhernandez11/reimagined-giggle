// Write a program that asks the user for a number and uses the while loop to print all the even numbers between 1 and that number. 
#include<iostream>
using namespace std;

int main(){
    cout << "Enter any number:";
    int num;
    cin >> num;
    int i = 2;
    while(i <= num){
        cout << i << "\n";
        i += 2;
    }
    cout << "These are all the even numbers between 1 and " << num << ".\n";
}
