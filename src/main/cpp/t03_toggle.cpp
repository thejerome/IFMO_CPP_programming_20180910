//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>


using namespace std;

int t03_toggle() {
char simvol;
cin>>simvol;
    if(simvol<='z' && simvol>='a'){
        simvol=simvol+'A'-'a';
        cout<<simvol;}
    else if(simvol<='Z' && simvol>='A'){
        simvol=simvol+'a'-'A';
        cout<<simvol;}
    else
cout<<simvol;
return 0;

}
