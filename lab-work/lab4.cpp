//Write a C++ program that receives number of items in an invoice from the user (let's say there are n items) and then receives price of those
// n items from the user and prints total of prices of all items. Use a while loop to solve this problem. 
#include<iostream>
using namespace std;

int main(){
    int n;
    double price;
    double total = 0;
    cout << "Enter the number of items purchased: ";
    cin >> n;
    int item = 0;
    while (item < n){
        cout << "Enter prices of item " << item + 1 << ":";
        cin >> price;
        total += price;
        item++;

    }
    cout << "Total price of " << n << " items is $" << total << ".\n";
}