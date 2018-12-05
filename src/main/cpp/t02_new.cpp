//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>
#include <set>


using namespace std;
//tests're passed
int t02_new() {

    int count, num;
    set <int> numbers_set;

    cin >> count;

    for (int i = 0; i < count; i++){
        cin >> num;
        if (numbers_set.find(num) != numbers_set.end()){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << ' ';
        numbers_set.insert(num);
    }
}
