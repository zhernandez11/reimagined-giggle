//Write a C++ program that uses a `while` loop to print all the multiples of 7 between 50 and 200.
#include<iostream>
using namespace std;

int main(){
    int i = 50;
    while (i <= 200){
        if (i%7==0){
            cout << i << "\n";
        }
        i++;
    }
}
/*int main(){
    int i = 56;
    while (i <= 200){
        cout << i << "\n";
        i +=7;
    }
}*/