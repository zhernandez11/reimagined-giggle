//Character Pattern: Write a program to print the following pattern using 
//nested loops:
//A
//BB
//CCC
//DDDD
//EEEEE
#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    char current = 'A';
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << current;
        }
        current++;
        cout << endl;
    }
}