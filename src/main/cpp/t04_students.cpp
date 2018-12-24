//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, 
// каждая из которых содержит фамилию, имя и три числа 
// (оценки по трем предметам: математике, физике, информатике). 
// Данные в строке разделены одним пробелом. 
// Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
// Выводить оценки не нужно. 
// Если несколько учащихся имеют одинаковые средние баллы, 
// то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//Sample Output:
//
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include "t04_students.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

    struct students {
        string name, surname;
        int marks[3];
    };

    bool compare(students a, students b) {
        int sum1 = 0,
                sum2 = 0;
        for (int i=0; i<3; i++) {
            sum1 += a.marks[i];
            sum2 += b.marks[i];
        }
        return sum1 > sum2;
    }

    int t04_students() {
        int N;
        cin >> N;
        vector <students> arr(N);
        for (int i=0; i<N; i++) {
            cin >> arr[i].name >> arr[i].surname;
            for (int j=0; j<3; j++) {
                cin >> arr[i].marks[j];
            }
        }
        stable_sort(arr.begin(), arr.end(), compare);
        for (auto i : arr) {
            cout << i.name << " " << i.surname << " ";
        }
        return 0;
    }

