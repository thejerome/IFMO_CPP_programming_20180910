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

int a[10];

bool check_if_queen_can_be_here(int i, int j, int y) {
    if (y == i) return true;
    else {
        return (a[y] != j) &&
               ((i - y) != (j - a[y])) &&
               ((i - y) != (a[y] - j)) &&
               check_if_queen_can_be_here (i,j,y + 1);
    }
}

int put_queen_if_you_can(int x, int i, int j) {
    if (i == x) {
        return 1;
    } else {
        if (j < x) {
            int r = 0;
            if (check_if_queen_can_be_here(i,j,0)) {
                a[i]=j;
                r = put_queen_if_you_can(x,i+1,0);
            }
            return r+put_queen_if_you_can(x,i,j+1);
        }
        else return 0;

    }
}
int t08_queen(){
    int x;
    cin >> x;
    cout << put_queen_if_you_can(x,0,0);

    return 0;
}
