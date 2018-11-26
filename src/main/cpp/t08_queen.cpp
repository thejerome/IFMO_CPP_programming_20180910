//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферeзя в очередной столбец.
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
int SumPlaces(int n, int x, int y);

bool PlaceForTheQueen(int x, int y, int z) {
    return z==x ? 1 : a[z]!=y && (x-z)!=(y-a[z]) && (x-z)!=(a[z]-y) && PlaceForTheQueen(x,y,z+1);}

int k(int n, int i) {return i==n ? 1 : SumPlaces(n,i,0);}

int SumPlaces(int n, int x, int y) {
    if (y<n) {
        int r=0;
        if (PlaceForTheQueen(x,y,0)) {
            a[x]=y;
            r=k(n,x+1);
        }
        return r+SumPlaces(n,x,y+1);
    }
    else return 0;}

int t08_queen(){
    int n;
    cin>>n;
    cout<<k(n,0);
    return 0;
}
