//Write a program that asks the user for a number and uses a `while` loop to print all the even numbers between 1 and that number.
#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number:";
    int num;
    cin >> num;
    int i = 1;
    while (i <= num){
        if (i%2==0){
            cout << i << "\n";
        }
        i ++;
    }
    cout << "These are all the even number between 1 and  " << num << ".\n";
}