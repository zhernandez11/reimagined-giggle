/*
Develop a C++ program that uses a `while` loop to calculate and print the sum of the squares of the first 15 positive integers (1^2 + 2^2 + 3^2 + ... + 15^2).
*/
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int sum = 0;
    while (i <= 15){
        sum +=(i * i);
        //sum = sum + (i * i);
        i++;
    }
    cout << sum << "\n";
}