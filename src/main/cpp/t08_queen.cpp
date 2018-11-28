//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include <iostream>
#include <vector>

using namespace std;

using namespace std;
bool CPQ(int* qP, int cN, int a) {
    for (int i = 0; i < cN; i++) {
        if (qP[i] == a || abs(a - qP[i]) == abs(cN - i)) {
            return false;
        }
    }
    return true;
}
int cA(int* qP, int cN, int boardSize) {
    if (boardSize == cN) {
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < boardSize; i++) {
        if (CPQ(qP, cN, i)) {
            qP[cN] = i;
            sum += cA(qP, cN + 1, boardSize);
        }
    }
    return sum;
}
int t08_queen(){
    int n;
    cin >> n;
    int qP[n];
    for (int i = 0; i < n; i++) {
        qP[i] = 0;
    }
    cout << cA(qP, 0, n);
    return 0;
}
