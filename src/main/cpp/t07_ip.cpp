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
#include <string>
#include <cstdlib>

using namespace std;

bool IpIsValid(string ip);

int t07_ip() {
    string ip;
    getline(cin, ip);
    if(IpIsValid(ip)) cout << "YES";
    else cout << "NO";
}

bool IpIsValid(string ip) {
    //== format control
    if(ip.length() > 3 * 4 + 3 || ip.length() < 7) return false;

    for(int i = ip.length() - 1; i >= 0; --i)
        if(ip[i] != '.' && ip[i] < '0' && ip[i] > '9')
            return false;

    for(int i = ip.length() - 1; i > 0; --i)
        if(ip[i] == '.' && ip[i-1] == '.')
            return false;

    if(ip[0] == '.' || ip[ip.length() - 1] == '.') return false;

    //== content check
    unsigned int count = 0;
    for(unsigned int i = 0, begin, end, quat, len = ip.length(); i < len; i = begin) {
        begin = i;
        end = i;
        while(end < len - 1 && ip[end] != '.') end++;
        count += (ip[end] == '.');
        quat = (unsigned int)atoi(ip.substr(begin, end).c_str());
        if(quat > 255) return false;
        begin = end+1;
    }

    return count == 3;
}