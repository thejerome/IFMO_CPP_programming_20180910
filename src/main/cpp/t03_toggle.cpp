//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {

char sim;
cin >> sim;
if(sim>='a'&&sim<='z'){
    cout << char('A'+sim-'a');
}
else if(sim>='A'&&sim<='Z'){
    cout << char('a'+sim-'A');
}
else{
    cout << sim;
}
}
