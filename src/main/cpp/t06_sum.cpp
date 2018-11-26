//Дана последовательность чисел, завершающаяся числом 0. 
// Найдите сумму всех этих чисел, не используя цикл.
//
//Формат входных данных
//        Вводится последовательность целых чисел, 
// оканчивающаяся числом 0 
// (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//17

#include <iostream>
#include <cmath>

using namespace std;

void summator(int* summa)
{
    int dif;
    cin >> dif;

    if (dif == 0)
    {
        return;
    }

    *summa += dif;
    summator(summa);
}

int t06_sum() {
    int summa = 0;
    summator(&summa);
    cout << summa;
    return 0;
}
