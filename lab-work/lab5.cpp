//Write a C++ program that receives 5 numbers from the user and prints the highest value of them on the screen. Use a while loop to solve this problem. 
#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int max = 0;
    int num;
    while (count < 5){
        cout << "Enter number " << count + 1 << ":";
        cin >> num;
        count ++;
        if (num > max){
            max = num;
        }
    }
    cout << max << " is the greatest number.\n";
}