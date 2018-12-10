//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
// то выведите такую же заглавную букву. 
// В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t02_up.h"
#include <iostream>


using namespace std;

int t02_up() {
char simvol;
cin>>simvol;
    if(simvol<='z' && simvol>='a'){
        simvol=simvol+'A'-'a';
        cout<<simvol;}
    else
        cout<<simvol;
return 0;

}
