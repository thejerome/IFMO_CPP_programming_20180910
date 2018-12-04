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
//test's passed
int t03_toggle() {

    char chr;
    int shift = int('a') - int ('A');

    cin >> chr;
    if (((chr >= 'A')  && (chr <= 'Z')) || ((chr >= 'a')  && (chr <= 'z'))) {
        cout << ((chr >= 'a') ? char(int(chr) - shift) : char(int(chr) + shift));
    }
    else{
        cout << chr;
    }
    return 0;
}
