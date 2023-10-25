//Create a C++ program that uses a `for` loop to simulate a guessing game. Generate a random number between 1 and 100, and have the user guess the number.
// Provide hints if the guess is too high or too low until they guess correctly.
#include<iostream>
using namespace std;
int main(){
    srand(time(NULL));
    int x = rand() % 100 + 1;  
    int c = 0; 
    int guess;
    for (int c = 0; c < 10; ){
        cout << "enter your guess: "; 
        cin >> guess; 
        if (guess > x) { 
            cout << "too high!" << endl; 
        } 
        if (guess < x) { 
            cout << "too low!" << endl; 
        }
        if (guess == x){
            break;
        }
        c++;
    }
    if (guess == x){
        cout << "You are correct!!!" << endl;
    }else{
        cout << "Out of chances to guess." << endl;
    }

}