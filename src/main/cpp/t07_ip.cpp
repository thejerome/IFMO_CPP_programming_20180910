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
//s.find() s.subslr()
//YES

#include "t07_ip.h"
#include <iostream>
#include <string>


using namespace std;
#include <string>
int t07_ip() {
string a;
int point = -1, kolichestvo = 0, res = 0, leng = 0;
getline(cin,a);
if (a[0]== '.'|| a[a.length()-1]=='.') res = 0;
else for (int i = 0; i<a.length(); i++){
    if (a[i]=='.' || i == a.length()-1){
        if (i == a.length()-1) leng++;
        if (a[i]== '.' && a[i-1] == '.') {
            res = 0;
            break;
        }
        else{
        int number = stoi(a.substr(point+1, leng));
        if (number <= 255 && number >-1)
            res = 1;
        else {
            res = 0;
            break;
        }
        leng = 0;
        point = i;
        kolichestvo ++;
    }}
    else leng++;
}
if (res == 1 && kolichestvo == 4)
    cout <<"YES";
else cout <<"NO";
}