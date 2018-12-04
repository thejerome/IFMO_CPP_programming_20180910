//Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах, 
// после чего поручила Васе проверить это домашнее задание. 
// Вася очень плохо знаком с данной темой, поэтому он нашел словарь, 
// в котором указано, как ставятся ударения в словах. 
// К сожалению, в этом словаре присутствуют не все слова. 
// Вася решил, что в словах, которых нет в словаре, он будет считать, 
// что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.
//
//Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом. 
// Вася решил, что в этом случае если то, как Петя поставил ударение, 
// соответствует одному из приведенных в словаре вариантов, 
// он будет засчитывать это как правильную расстановку ударения, 
// а если не соответствует, то как ошибку.
//
//Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. 
// Ваша задача — определить количество ошибок, которое в этом задании насчитает Вася.
//
//Входные данные
//
//Вводится сначала число N — количество слов в словаре (0 ≤ N ≤ 20000).
//
//Далее идет N строк со словами из словаря. Каждое слово состоит не более чем из 30 символов. 
// Все слова состоят из маленьких и заглавных латинских букв. 
// В каждом слове заглавная ровно одна буква — та, на которую попадает ударение. 
// Слова в словаре расположены в алфавитном порядке. 
// Если есть несколько возможностей расстановки ударения в одном и том же слове, 
// то эти варианты в словаре идут в произвольном порядке.
//
//Далее идет упражнение, выполненное Петей. Упражнение представляет собой строку текста, 
// суммарным объемом не более 300000 символов. Строка состоит из слов, 
// которые разделяются между собой ровно одним пробелом. 
// Длина каждого слова не превышает 30 символов. 
// Все слова состоят из маленьких и заглавных латинских букв 
// (заглавными обозначены те буквы, над которыми Петя поставил ударение). 
// Петя мог по ошибке в каком-то слове поставить более одного ударения или не поставить ударения вовсе.
//
//Выходные данные
//
//Выведите количество ошибок в Петином тексте, которые найдет Вася.
//
//Примечание к примеру
//
//
//1. В слове cannot, согласно словарю возможно два варианта расстановки ударения. 
// Эти варианты в словаре могут быть перечислены в любом порядке 
// (т.е. как сначала cAnnot, а потом cannOt, так и наоборот).
//Две ошибки, совершенные Петей — это слова be (ударение вообще не поставлено) 
// и fouNd (ударение поставлено неверно). Слово thE отсутствует в словаре, 
// но поскольку в нем Петя поставил ровно одно ударение, признается верным.
//
//2. Неверно расставлены ударения во всех словах, кроме The (оно отсутствует в словаре,
// в нем поставлено ровно одно ударение). В остальных словах либо ударные все буквы (в слове PAGE),
// либо не поставлено ни одного ударения.
//
//
//Sample Input 1:
//
//4
//cAnnot
//cannOt
//fOund
//pAge
//thE pAge cAnnot be fouNd
//
//Sample Output 1:
//
//2
//
//Sample Input 2:
//
//4
//cAnnot
//cannOt
//fOund
//pAge
//The PAGE cannot be found
//Sample Output 2:
//
//4

#include "t06_homework.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

    bool is_stresses_correct(string s){             //checking for number of stress
        int c=0;
        for (int i=0; i < s.length(); i++){
            if (s[i]>='A' && s[i]<='Z') c++;
        }
    if (c==1) return true;
        else return false;
    }

    string low(string s){
        string t;
        t="";
        for (int i=0; i<s.length(); i++){
            if (s[i]>='A' && s[i]<='Z') s[i]=s[i]-'A'+'a';
            t+=s[i];
        }
        return t;
    }

int t06_homework() {
   string s,t;
   int N, mistakes;
   s="";
   mistakes=0;
   set<string> dictionary;
   set<string> homework;
   cin >> N;
   for (int i=0; i<N; i++){                 //enter data in dictionary
       t="";
       cin >> t;
       dictionary.insert(t);
   }
   cin.get();                               //without this nothing works
   getline(cin, s);                         //get homework
   t="";
   for (int i=0; i<s.length(); i++){        //devide s to words
       if (s[i]!=' ' && i!=s.length()-1) t+=s[i];
            else {
                if (s[i]!=' ') t+=s[i];
                homework.insert(t);
                t="";
            }
   }
   /*for (int i=0; i<homework.size(); i++){
       bool correct = false;
       if (is_stresses_correct(homework[i])){
           for (int j=0; j<dictionary.size(); j++){
               if (low(homework[i])==low(dictionary[j]) && homework[i]==dictionary[i]) break;
                    else while(j<dictionary.size() && low(dictionary[j])==low(dictionary[j+1]))
                        if (homework[i]==dictionary[j+1]){
                            correct = true;
                        } else j++;
           }
       } else {
           //cout << '|'<<homework[i]; //<< endl;
           mistakes++;
       }
       //cout << 1;
       if (correct==false) mistakes++;
   }*/ //first version (it didn't work, so I've decided to try something new)


   for (auto nowh=homework.begin(); nowh!=homework.end(); nowh++){
       string elementh = *nowh;
       if (is_stresses_correct(elementh)==true) {                                   //checking stress
           for (auto nowd=dictionary.begin(); nowd!=dictionary.end(); nowd++){
               string elementd = *nowd;
               if (low(elementh)==low(elementd)){                                   //is word in dictionary?
                   if (dictionary.find(elementh)==dictionary.end()){                //is word written by the rule?
                        mistakes++;
                   }
               }
           }
       }else mistakes ++;
   }
   cout << mistakes;              //very important place in program
}
