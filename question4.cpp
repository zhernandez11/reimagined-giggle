#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
        i++;
    }
}
