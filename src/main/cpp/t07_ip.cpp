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
    string str;
    int pointCounter = 0, err = 0, number = 0, exp = 1;
    getline(cin, str);
    for (int i = str.size() - 1; i >= 0; i--) {
        if (err == 0) {
            if ((str[i] == '.') && (pointCounter < 4) && (number >= 0) && (number <= 255)) {
                pointCounter++;
                number = 0;
                exp = 1;
            } else if ((str[i] >= '0') && (str[i] <= '9')) {
                number += (int(str[i]) - '0') * exp;
                exp *= 10;
            } else {
                err++;
                number = 0;
                exp = 1;
            }
        }
    }
    if ((number >= 0) && (number <= 255) && (err == 0) && (pointCounter < str.size()) && (pointCounter == 3)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
