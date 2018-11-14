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

struct pos{
    int x,y;
};

bool itisnotattaked(pos *queen, int n, pos newpos){
    for (int i = 0; i < n; i++){
        if ( queen[i].x == newpos.x ||
        queen[i].x + queen[i].y == newpos.x + newpos.y ||
        queen[i].x - queen[i].y == newpos.x - newpos.y){
            return false;
        }
    }
    return true;
}

void check(pos *queen, int n, int line, int &ans){
    if (line < n){
        for (int i = 0; i < n; i++){
            pos newpos;
            newpos.x = i;
            newpos.y = line;
            if (itisnotattaked(queen, line, newpos)){
                queen[line] = newpos;
                check(queen, n, line + 1, ans);
            }
        }
    }else{
        ans++;
    }
}

int t08_queen(){
    int n;
    cin >> n;
    pos queen[n];
    int ans = 0;
    check(queen, n, 0, ans);
    cout << ans;
    return 0;
}
