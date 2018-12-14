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
    string text;
    getline (cin, text);
    text += '.';
    int size = text.size();
    int oktet = 0;
    string current_oktet = "";
    for (int i = 0; i < size; i++)
        if (text[i] >= '0' && text[i] <= '9') {
            current_oktet += text[i];
        }
        else if (text[i] == '.') {
            if (current_oktet.length() == 0 || current_oktet[0] == '0' && current_oktet.length() != 1 || current_oktet.length() > 3) {
                cout << "NO";
                return 0;
            }
            int n = stoi(current_oktet);
            if (n > 255) {
                cout << "NO";
                return 0;
            }
            current_oktet = "";
            oktet++;
        }
        else {
            cout << "NO";
            return 0;
        }
    if (oktet != 4)
        cout << "NO";
    else
        cout << "YES";
}
