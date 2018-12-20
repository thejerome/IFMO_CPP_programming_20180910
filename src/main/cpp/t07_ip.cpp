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
    string ip;
    getline(cin, ip);
    int dots = 0, if_was_break = 0;
    string number;
    if (ip[0] == '.' || ip[ip.size()-1] == '.' || ip.size() < 7){
        cout << "NO";
    }
    else  {
        for(int i = 0; i < ip.size(); i++){
            if (ip[i] != '.') {
                if (ip[i] >= '0' && ip[i] <= '9') {
                    number += ip[i];
                }
                else {
                    if_was_break++;
                    break;
                }
            }
            else {
                if (stoi(number) > 255 || stoi(number) < 0) {
                    if_was_break++;
                    break;
                }
                number = '0';
                dots++;
            }
        }
        if (dots == 3 && if_was_break == 0) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }

}
