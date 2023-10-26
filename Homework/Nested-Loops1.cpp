//Hollow Rectangle: Write a program to print a hollow rectangle pattern of 
//asterisks with 'm' rows and 'n' columns. The user inputs 'm' and 'n', 
//and the program generates the pattern with a hollow interior.
#include<iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;
    int i = 1;
    while (i <= m) {
        int j = 1;
        while (j <= n) {
            if (i == 1 || i == m || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}
