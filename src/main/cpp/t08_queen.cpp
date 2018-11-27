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
bool can_queen(int rowCurrent, int *&NQueen);
void queen(int rowCurrent, int *&NQueen, int n, int &count);

bool can_queen(int rowCurrent, int *&NQueen){
    int i = 0;
    while(i < rowCurrent){
        if(NQueen[i] == NQueen[rowCurrent] || (abs(NQueen[i] - NQueen[rowCurrent]) == abs(i - rowCurrent))){
            return false;
        }
        i++;
    }
    return true;
}

void queen(int rowCurrent, int *&NQueen, int n, int &count){
    if(rowCurrent == n){
        count++;
    }
    for(int i = 0; i < n; i++){
        NQueen[rowCurrent] = i;
        if(can_queen(rowCurrent,NQueen)){
            queen(rowCurrent+1,NQueen,n,count);
        }
    }
}

int t08_queen(){
    int n;
    int count = 0;
    cin >> n;
    if(n < 4){
        return 0;
    }
    int *NQueen = new int[n];
    queen(0, NQueen, n, count);
    cout << count;
    return 0;
}
/**
int N;
bool can_queen(int row, int k);
int queen(int row, int count);


int t08_queen(){
    int count=0;
    int row = 1;
    cin >> N;
    queen(row, count);
    cout << count;
    return 0;
}

int queen(int row, int count) {
    int a[N];
    if (row == N+1) {
        count++;
        return count;
    }
    else {
        for (int k = 0; k < N; k++) {
            if (can_queen(row, k)) {
                a[row-1] = k;
                cout << "a[" << row-1 << "]=" << k;
                queen(row + 1, count);
            }
        }
    }
}
bool can_queen(int row, int k){
    int a[N];
    for (int i = 0; i<row-1; i++) {
        if ((row-1-i == k-a[i]) || (row-i-1 == a[i]-k) || (k == a[i])) return false;
    }
    return true;
}
 **/