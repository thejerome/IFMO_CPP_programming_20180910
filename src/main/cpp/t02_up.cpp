//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
// то выведите такую же заглавную букву. 
// В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t02_up.h"
#include <iostream>


using namespace std;
//tests're done
int t02_up() {

    char chr;
    int shift = int('a') - int ('A');

    cin >> chr;

    cout << ((chr>= 'a') && (chr <= 'z') ? char(int(chr)-shift) : chr);
}
