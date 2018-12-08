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

int t07_ip() {
    string s, g = "", h = "0123456789.";
    int n = 0;
    cin >> s;
    int k = 0, t = 0, ch = 0;
    for (int i = 0; i < s.length(); i++) {
        if (h.find(s[i]) == -1) {
            k = 1;
            break;
        } else {
            if (s[i] >= '0' && s[i] <= '9') {
                g += s[i];
            } else {
                t++;
                if (g == "") {
                    k = 1;
                    break;
                }
                ch++;
                if (g == "") {
                    k = 1;
                    break;
                }
                n = stoi(g);
                if ((n < 0) || (n > 255)) {
                    k = 1;
                    break;
                }
                g = "";
            }
        }
    }
    if (g == "") {
        k = 1;
    }
    ch++;
    if (g == "") {
        k = 1;

    } else {
        n = stoi(g);
    }
    if (n < 0 || n > 255) {
        k = 1;
    }
    if (k == 0 && t == 3 && ch == 4) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
