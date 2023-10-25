//Half Pyramid of Numbers: Write a C++ program that prints a half pyramid pattern using numbers as shown below for a number received from the user:
//1
//12
//123
//1234
//12345
#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int i = 1;
    int j = 1;
    while (i <= num){
        j = 1;
        while (j <= i){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}