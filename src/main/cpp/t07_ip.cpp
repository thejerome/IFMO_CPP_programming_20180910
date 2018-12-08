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
    string s,s1;
    int d,sum,t,prv;
    sum=0;
    d=1;
    t=0;
    prv=0;
    getline (cin,s);

    char k=0;

    for (int i=s.size()-1;i>=0;i--){

        if(s[i]!='.'){
            k=s[i]-'0';
            sum=sum+(k*d);
            d=d*10;
        }
        else {
            if((sum>=0)&&(sum<=255)) {
                prv++;
        }
        d=1;
            t++;
            sum=0;
        }
    }

    if((sum>=0)&&(sum<=255)) {
        prv++;
    }


    if(t!=3||prv!=4){
        cout<<"NO";
    }

    else{
        cout<<"YES";
    }
}
