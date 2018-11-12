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
int cnt=0, n;
bool a[10][10];

void tick(int x, int y) {
    int i=x, j=y;
    while (i<n && j<n) {
        a[i][j]=true;
        i+=1;
        j+=1;
    }
    i=x, j=y;
    while (i<n) {
        a[i][j]=true;
        i+=1;
    }
    i=x, j=y;
    while (i<n && j>=0) {
        a[i][j]=true;
        i+=1;
        j-=1;
    }
}

void untick(int x, int y) {
    int i=x, j=y;
    while (i<n && j<n) {
        a[i][j]=false;
        i+=1;
        j+=1;
    }
    i=x, j=y;
    while (i<n) {
        a[i][j]=false;
        i+=1;
    }
    i=x, j=y;
    while (i<n && j>=0) {
        a[i][j]=false;
        i+=1;
        j-=1;
    }
}

void deQuy(int nq) {
    if (nq == n) {cnt++; return;}
    for (int i=0; i<n; i++)
        if (!a[nq][i]) {
            tick(nq,i);
            deQuy(nq+1);
            untick(nq,i);
        }
}

int t08_queen() {
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) a[i][j]=false;
    deQuy(0);
    cout << cnt;
    return 0;
}
