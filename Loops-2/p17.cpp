//Create a C++ program that asks the user for an integer and then uses a `for` loop to print the Fibonacci sequence up to the entered number.
//The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int sum;
    int Num1 = 0;
    int Num2 = 1;
    for (int i = 1; i <= x; i++){
        if (i == 1){
            cout << Num1 << " ";
        }
        if (i == 2){
            cout << Num2 << " ";
        }
        sum = Num1 + Num2;
        Num1 = Num2;
        Num2 = sum;
        cout << sum << " ";
    }
    cout << endl;
}