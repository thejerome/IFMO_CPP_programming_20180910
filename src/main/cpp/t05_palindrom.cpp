//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

int t05_palindrom() {
    string word;
    int k = 0;
    getline(cin, word);
    for (int i = 0; i < word.size() / 2; i ++){
        if (word[i] == word[word.size()-1-i]){
            k += 1;
        }
    }
    if (k == (word.size() / 2)){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
