//Develop a program that calculates and prints the factorial of a number using a `for` loop.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int result = 1;
    for (int i = 1; i <= x; i++ ){
        result = result * i;
    }
    cout << result << " is the factorial of " << x << "." << endl;
}