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

    string s, s_check;


    int dot_1, dot_2, dot_3, first_n, second_n, third_n, fourth_n;

    getline(cin, s);
 //   cout << (int)s[s.length()-1]<< endl;
if ((s.length()<7)||(((int)s[s.length()-1]<47)||((int)s[s.length()-1]>57))){
    cout << "NO"; return 0;
}else {
    //  cout<<s.size()<< " "<< s.length()<< endl;

    dot_1 = s.find_first_of(".");//>0
    dot_2 = s.find(".", dot_1 + 1);//>0
    dot_3 = s.find(".", dot_2 + 1);//>0

   // cout << dot_1 << " "<< dot_2<< " "<< dot_3<< endl;
//48
//57


/*bool second_check;
for (int i=dot_1+1; i<dot_2; ++i){
    if(int(s[i])<48 && int(s[i])>57){
       second_check=false;
    }
}*/

/*bool third_check;
for (int i=dot_2; i<dot_3; ++i){
   if(int(s[i])<48 && int(s[i])>57){
      third_check=false;
   }
}*/
    if ((int(s[0]) != 48) && dot_1 >= 1 && dot_1 <= 3) {
        bool first_check = true;
        for (int i = 0; i < dot_1; ++i) {
            if ((int(s[i])) < 49 || (int(s[i]) > 57)) {
                first_check = false;
                cout << "NO";
                return 0;
            }//
        }
            s_check = s;
            s_check.erase(dot_1, (s.length() - dot_1));
            first_n = stoi(s_check);
            if (first_n >= 1 && first_n <= 255) {
                //NEXT IDEA
                if ((dot_2 != dot_1 + 1) && (dot_2 != dot_1) && (dot_2 >= 3 && dot_2 <= 7)) {
                    bool second_check = true;
                    for (int i = dot_1 + 1; i < dot_2; ++i) {
                        if ((int(s[i])) < 48 || (int(s[i])) > 57) {
                            second_check = false;
                            cout << "NO";
                            return 0;
                        }
                    }
                        s_check = s;
                        s_check.erase(dot_2, (s.length() - dot_2));
                        s_check.erase(0, dot_1 + 1);
                        second_n = stoi(s_check);
                        if (second_n >= 0 && second_n <= 255) {
                            //PRE-LAST_CHECK
                            if ((dot_3 != dot_2 + 1) && (dot_3 != dot_2) && (dot_3 >= 5 && dot_3 <= 11)) {
                                bool third_check = true;
                                for (int i = dot_2 + 1; i < dot_3; ++i) {
                                    if ((int(s[i])) < 48 || (int(s[i])) > 57) {
                                        third_check = false;
                                        cout << "NO";
                                        return 0;
                                    }
                                }
                                    s_check = s;
                                    s_check.erase(dot_3, (s.length() - dot_3));
                                    s_check.erase(0, dot_2 + 1);
                                    third_n = stoi(s_check);
                                    if (third_n >= 0 && third_n <= 255) {
                                        //LAST CHECK
                                        bool fourth_check = true;
                                        for (int i = dot_3 + 1; i <= (s.length() - 1); ++i) {
                                            if ((int(s[i])) < 48 || (int(s[i])) > 57) {
                                                fourth_check = false;
                                                cout << "NO";
                                                return 0;
                                            }
                                        }
                                        s_check = s;
                                        s_check.erase(0, dot_3 + 1);
                                        fourth_n = stoi(s_check);
                                        if (fourth_n >= 0 && fourth_n <= 255) {
                                            cout << "YES";
                                            return 0;
                                        } else {
                                            cout << "NO";
                                            return 0;
                                        }
                                    } else{
                                        cout << "NO";
                                        return 0;
                                    }


                                } else {
                                cout << "NO";
                                return 0;
                            }

                        } else {
                            cout << "NO";
                            return 0;
                        }

                } else {
                    cout << "NO";
                    return 0;
                }

            } else {
                cout << "NO";
                return 0;
            }


    } else {
        cout << "NO";
        return 0;
    }
}

    //dot_2=s.find(".", dot_1+1);
   // if ((dot_2 != dot_1+1) && (dot_2 != dot_1) && )



//cout << dot_1<< " "<<dot_2<< " "<<dot_3<< " "<< int(s[0]);

}
