//Develop a C++ program that receives a number and uses a `while` loop to find out if it is a prime number.  // this problem is updated!
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    bool isPrime = true;
    while (i <= (num - 1) ){
       if(num%i==0){
        isPrime = false;
        break;
       }else{
        isPrime = true;
       }
        i++;
    }
    cout << num << " is " << isPrime << " (0 is non-prime number & 1 is prime number)\n";
}