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

bool is_valid_ip(string s)
{
    if (s.length() == 0){ return false;}//empty string
    if ((stoi(s)>=0)&&(stoi(s)<=255))//ip range
    {
        return true;
    }
    else
    {
        return false;
    }
}
int t07_ip() {
    string inp, ip[4];
    long found=-1, anchor=0;
    short ips=0;
    getline(cin, inp);
    for (long i = 0; i < inp.length(); i++)
    {
        anchor = found+1;
        found = inp.find('.', anchor);
        if (found == string::npos) // no more dots
        {
            ip[ips] = inp.substr(anchor); //get last triad
            break;
        }
        if ( found - anchor == 0) //this triad doesn't exist
        {
            cout << "NO"; //"- empty triad"
            return 0;
        }
        ip [ips] = string(&inp[anchor], &inp[found]);
        ips++;
        if (ips > 3) {cout<<"NO"; return 0;} // trailing dot
        i = found-1;
    }

    for(short i = 0; i < 4; i++)
    {
        if (!is_valid_ip(ip[i]))
        {
            cout<<"NO";//"- wrong value";
            return 0;
        }
    }
    cout << "YES";// finally
    return 0;
}
