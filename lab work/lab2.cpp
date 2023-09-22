//Write a C++ program that calculates the sum of all even numbers from 1 to 50 using a `while` loop.
#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int sum=0;
    while (i <= 50){
        if(i%2==0){
            sum+=i;
        }
        i++;
}
    cout << sum << "\n";
}