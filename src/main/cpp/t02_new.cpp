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

int t02_new() {
    multiset <int> numbers;
    int N;
    cin >> N;
    for (int i=0; i<N; i++) {
    	int number = 0;
    	cin >> number;
    	if (numbers.find(number) == numbers.end()) {
    		cout << "NO" << endl;
    	}
    	else {
    		cout << "YES" << endl;
    	}
        numbers.insert(number);
    }
    return 0;
}