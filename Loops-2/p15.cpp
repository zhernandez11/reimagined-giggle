//Develop a C++ program that uses a `for ` loop to generate and print the first 20 terms
// of the geometric progression with a common ratio of 2, starting with the term 1.
#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int i;
    for (int i = 1; i <= x; ){
        cout << i << endl;
        i = i * 2;
    }
}
