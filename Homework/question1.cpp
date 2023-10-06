//Write a program that uses a `while` loop to calculate and print the sum of all odd numbers from 1 to 50.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;
    while (i <= 50){
        sum += i;
        i +=2;
    }
    cout << sum << "\n";
}