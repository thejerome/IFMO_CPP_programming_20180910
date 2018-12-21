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
    string raw_ip;
    int parsed_int;
    int dotcount = -1;
    cin >> raw_ip;
    int temp = 0;
    if (raw_ip[0] == '.' or raw_ip[raw_ip.length() - 1] == '.'){
        cout << "NO";
	exit(0);
    }
    for (int i = 0; i <= raw_ip.length(); i++){
        if (raw_ip[i] == '.' or i == raw_ip.length()){
            string buffer = raw_ip.substr(temp, i - temp);
	    if (buffer.length() == 0){
	        cout << "NO";
		exit(0);
	    }
	    if (stoi(buffer) < 0 or stoi(buffer) > 255){
	        cout << "NO";
		exit(0);
	    }
	    temp = i + 1;
	    dotcount = dotcount + 1;
	}
    }
    if (dotcount != 3){
        cout << "NO";
	exit(0);
    }
    cout << "YES";
}
