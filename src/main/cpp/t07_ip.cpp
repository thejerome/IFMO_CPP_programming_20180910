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


using namespace std;

bool check(string s) {
    int n = (int)s.length();
    if (n == 0 || n > 3)
        return false;
    for (int i = 0; i < n; i++)
        if (!(s[i] >= '0' && s[i] <= '9'))
            return false;
    int x = stoi(s);
    if (x >= 0 && x <= 255)
        return true;
    return false;
}

int t07_ip() {
    string s;
    getline(cin, s);
    int n = (int)s.length(), prev = 0, cnt = 0;
    bool ok = true;
    for (int i = 0; i < n && ok; i++) {
        if (s[i] == '.') {
            ok &= check(s.substr(prev, i - prev));
            prev = i + 1;
            cnt++;
        }
    }
    ok &= check(s.substr(prev, prev - n));
    if (cnt != 3)
        ok = false;

    if (ok)
        cout << "YES";
    else
        cout << "NO";
}
