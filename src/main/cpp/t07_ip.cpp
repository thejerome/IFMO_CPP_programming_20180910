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
    getline(cin,ip);
    int i=0;
    int count=0;
    int iparr[ip.length()];

    if (ip.length() == 0) cout << "NO";
    else{
        while(i <= ip.size()-1){
            int temp = i;
            if(ip.find(".",i) != string::npos){
                if(i == ip.find(".",i)){
                    cout << "NO";
                    return 0;
                }
                i = ip.find(".",i)+1;
                iparr[count] = stoi(ip.substr(temp,i));
                if(iparr[count] < 0 || iparr[count] > 255){
                    cout << "NO" ;
                    return 0;
                }
                count++;

            }
            else {
                iparr[count] = stoi(ip.substr(temp,ip.length()));
                if(iparr[count]<0 || iparr[count] >255 || count != 3){
                    cout << "NO";
                    return 0;
                }
                break;
            }
        }
    }
    cout << "YES";
    /**string str;
    string a;
    while (i<ip.size()){
        if (ip.find(".",i) != string::npos){
            str = ip.substr(i,ip.find(".",i));
            cout << str << endl;
            if((stoi(str) < 0) || (stoi(str) > 255)) cout << "NO";
            else

            else break;
        }
        else {
            str = ip.substr(ip.size() - 1, i);
            if ((count == 3) && (stoi(str) >= 0) && (stoi(str) <= 255) && (str.size() >= 1) && (str.size() <= 3))
                count++;
            else break;
        }
    }
    if (count == 4) cout << "YES";
    else cout << "NO";**/
    return 0;

}
