//Write a C++ program that receives 5 numbers from the user and prints "Ascending" if numbers that are entered are in the ascending order.
// Use a while loop to solve this problem. Example of an ascending list: 1, 9, 25, 45, 129
#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int num;
    while (count < 5){
        cout << "Enter number " << count + 1 << ":";
        cin >> num;
        count++;
    }
    cout << num << "\n";
}