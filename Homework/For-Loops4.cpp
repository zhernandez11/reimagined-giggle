//Write a C++ program to receive a text and a word, and count how many times 
//the word appears in the text. Example: Input: Word: "apple" Text: "I love apples, 
//and my friend loves apples too. Apples are great!" Output: "The word 'apple' appears 3 times."
#include<iostream>
using namespace std;
int main(){
    string text;
    getline(cin, text);
    string target;
    cout << "Enter a word you want to be counted: ";
    cin >> target;
    int count = 0;
    string word;
    for(int i = 0; i < text.length(); i++){
        if (text[i] == ' '){
            if (word == target){
                count ++;
                word = "";
            }else{
                word = "";
            }
        }else{
            word += text[i];
        }
    }
    cout << target << " appeard " << count << " times." << endl;

}
