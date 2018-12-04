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
//tests're passed
using namespace std;

bool check(string str){
    if (str.size() == 0) return true;
    for (int i = 0; i < str.size(); i++){
        if ((str[i] < '0') || (str[i] > '9')){
            return true;
        }
    }
    return false;
}

int t07_ip() {
    string str_num1 = "", str_num2 = "", str_num3 = "", str_num4 = "";

    getline(cin, str_num1, '.');
    getline(cin, str_num2, '.');
    getline(cin, str_num3, '.');
    getline(cin, str_num4);



    if ((atoi(&str_num1[0]) < 0) || (atoi(&str_num2[0]) < 0) || (atoi(&str_num3[0]) < 0) || (atoi(&str_num4[0]) < 0) ||
        (atoi(&str_num1[0]) > 255) || (atoi(&str_num2[0]) > 255) || (atoi(&str_num3[0]) > 255) || (atoi(&str_num4[0]) > 255) ||
        (check(str_num1)) || (check(str_num2)) || (check(str_num3)) || (check(str_num4))){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}
