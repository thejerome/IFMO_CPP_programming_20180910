#include "t06_homework.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

    bool is_stresses_correct(string s){
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
   for (int i=0; i<N; i++){
       t="";
       cin >> t;
       dictionary.insert(t);
   }
   cin.get();
   getline(cin, s);
   t="";
   for (int i=0; i<s.length(); i++){
       if (s[i]!=' ' && i!=s.length()-1) t+=s[i];
            else {
                if (s[i]!=' ') t+=s[i];
                homework.insert(t);
                t="";
            }
   }

   for (auto nowh=homework.begin(); nowh!=homework.end(); nowh++){
       string elementh = *nowh;
       if (is_stresses_correct(elementh)==true) {
           for (auto nowd=dictionary.begin(); nowd!=dictionary.end(); nowd++){
               string elementd = *nowd;
               if (low(elementh)==low(elementd)){
                   if (dictionary.find(elementh)==dictionary.end()){
                        mistakes++;
                   }
               }
           }
       }else mistakes ++;
   }
   cout << mistakes;
}
