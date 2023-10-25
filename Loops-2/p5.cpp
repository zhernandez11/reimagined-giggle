//Chessboard Pattern: Create a program to print a chessboard pattern of 'n' rows and 'm' columns, with alternating 'X' and 'O' characters.
// The user inputs 'n' and 'm'.
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int y;
    cin >> y;
    int i = 1;
    int c = 1;
    while (i <= y) {
        if (i%2==0){
        while (c <= x){
        cout << "X" << "O";
        c++;
        }
    }else{
        while (c <= x){
        cout << "O" << "X";
        c++;
        }
    }
    cout << endl;
    c = 1;
    i++;
    }
}