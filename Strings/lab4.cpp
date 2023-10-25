//Create a program that receives a sentence from the user including a set of first names separated by space 
//and prints out the name that would show up first in alphabetical order. 
//You cannot assume no two names in the list share the same first character. Example: if the input is "John Lauren Ashton Nicholas Ava", the output should be "Ashton". 
#include<iostream>
using namespace std;

int main(){
    string names;
    getline(cin, names);
    string nextName;
    string firstRankName;
    int i = 0;
    while (i < names.length()){
          if (names[i] == ' ') {
            int j = 0;
            while (j < nextName.length() && j < firstRankName.length()){
                if (nextName[j] == firstRankName[j]){
                    j++;
                } else if (nextName[j] < firstRankName[j]){
                    firstRankName = nextName;
                    break;
                }
            }
        }else {
            nextName += names[i];
        }
        i++;
    }
    if (nextName[0] < firstRankName[0] or firstRankName == "") { 
        firstRankName = nextName; 
    } else if (nextName[0] = firstRankName[0] && nextName[1] < firstRankName[1]){
    firstRankName = nextName;
    } 
    cout << firstRankName << endl;
}