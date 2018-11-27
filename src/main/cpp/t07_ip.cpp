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

int howmanydots(string s){
    int dot=0;
    int count=0;
    bool ok = true;
    while (ok){
        dot=s.find('.',dot);
        if (dot==-1) ok = false;
        else {count++; dot++;}
    }
    return count;
}

bool is_two_dots_together(string s){
    if (s.find("..")==-1) return false;
        else return true;
}

int t07_ip() {
    string ip;
    bool all_is_OK=true;
    getline(cin, ip);
    if (howmanydots(ip)!=3) all_is_OK=false;
    if (ip[0]=='.' || ip[ip.length()-1]=='.') all_is_OK=false;
    if (is_two_dots_together(ip)) all_is_OK=false;
    int i=0;
    string current_number="";
    while (i<ip.length() && all_is_OK){
        current_number=current_number+ip[i];
        i++;
        if (ip[i]=='.' || i==ip.length()) {
            int number = stoi(current_number);
            current_number=""; i++;
            if (!(number>=0 && number <256)) all_is_OK=false;
        }
    }
    if (all_is_OK) cout << "YES";
        else cout << "NO";
}
