//Pattern with Numbers: Write a C++ program that receives an integer 'n' from the user and prints a pattern as shown below for 'n = 5':
//1
//22
//333
//4444
//55555
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
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}