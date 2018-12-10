//В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
// который принято записывать в виде четырех чисел, 
// каждое из которых может принимать значения от 0 до 255, разделенных точками.
// Вот примеры правильных IP-адресов:
//127.0.0.0
//192.168.0.1
//255.0.255.255
//Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
//
//Входные данные
//
//Программа получает на вход строку из произвольных символов.
//
//Выходные данные
//
//Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
//
//Примечание
//
//Для перевода из строки в число удобно пользоваться функцией stoi,
// которая принимает на вход строку, а возвращает число.
//
//Sample Input:
//
//127.0.0.1
//Sample Output:
//
//YES

#include "t07_ip.h"
#include <iostream>

using namespace std;

int t07_ip() {
	string ipAddress;
	cin >> ipAddress;
	string currentNumber;
	bool isCorrect = true;
	int dots = 0;
	for (int i=0; i<ipAddress.size(); i++) {
		currentNumber += ipAddress[i];
		if (ipAddress[i] == '.') {
			dots++;
			if (currentNumber == "." || currentNumber.size() > 4 || (stoi(currentNumber) > 255 || stoi(currentNumber) < 0)) {
				isCorrect = false;
				break;
			}
			currentNumber.clear();
		}
	}
	if (dots != 3) {
		isCorrect = false;
	}
	isCorrect ? cout << "YES" : cout << "NO";
	return 0;
}
