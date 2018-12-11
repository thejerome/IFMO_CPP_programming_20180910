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

int t02_up() {
	char symbol;
	cin >> symbol;
	if (symbol >= 'a'  && symbol <= 'z') {
		cout << char('S' + symbol - 's') << endl;
	}
	else {
		cout << symbol << endl;;
	}
}
