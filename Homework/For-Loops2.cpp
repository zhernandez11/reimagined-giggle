//Create a program that receives a text containing first names separated by spaces and 
//prints "sorted" if they are alphabetically in ascending order.
//Example: Input: "Ava John Lauren Nicholas" Output: "sorted"
#include <iostream>
using namespace std;
int main() {
    string names;
    getline(cin, names);

    string currentName, previousName = "";
    bool isSorted = true;

    for (int i = 0; i < names.length(); ++i) {
        if (names[i] != ' ') {
            currentName += names[i];
        } else {
            if (currentName < previousName) {
                isSorted = false;
                break;
            }
            previousName = currentName;
            currentName = "";
        }
    }
    if (currentName < previousName) {
        isSorted = false;
    }
    if (isSorted) {
        cout << "sorted" << endl;
    } else {
        cout << "not sorted" << endl;
    }
}
