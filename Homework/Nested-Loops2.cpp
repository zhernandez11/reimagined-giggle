//Floyd's Triangle: Develop a program to generate and print Floyd's Triangle 
//for 'n' rows. Floyd's Triangle is a right-angled triangular array of natural numbers. For 'n = 4', the pattern looks like this:
//1
//2 3
//4 5 6
//7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int start = 1;
    int row = 1;
    while (row <= n){
        int line = 1;
        while (line <= row){
            cout << start << " ";
            start++;
            line++;
        }
        cout << endl;
        row++;
    }
}