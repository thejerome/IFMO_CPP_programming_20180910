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
//tests're passed;
using namespace std;

void initialization(bool *, int);
void recursion(bool *, bool *, bool *, bool *, int, int, long int &,const int &);
void div(long int &, const int &);


int t08_queen(){

    bool horizont[10], vertical[10],
         main_diag[19], secondary_diag[19];
    int N;
    long ways = 0;

    cin >> N;

    initialization(horizont, N);
    initialization(vertical, N);
    initialization(main_diag, 2*N-1);
    initialization(secondary_diag, 2*N-1);

    recursion(horizont, vertical, main_diag, secondary_diag, 0, 0, ways, N);

    cout << ways;

    return 0;
}

void initialization(bool *massive, int size){
    for (int i = 0; i < size; i++){
        massive[i] = false;
    }
    return;
}

void recursion(bool *horizont, bool *vertical, bool *main_diag, bool *secondary_diag, int ferz_count, int i0, long int &ways, const int &N){

    if (ferz_count == N) {
        ways++;
    }
    else {
        for (int i = i0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if ((!horizont[i]) && (!vertical[j]) && (!main_diag[i + j]) && (!secondary_diag[i + (N - 1 - j)])) {

                    horizont[i] = true; vertical[j] = true;
                    main_diag[i + j] = true; secondary_diag[i + (N - 1 - j)] = true;

                    recursion(horizont, vertical, main_diag, secondary_diag, ferz_count + 1, i,  ways, N);

                    horizont[i] = false; vertical[j] = false;
                    main_diag[i + j] = false; secondary_diag[i + (N - 1 - j)] = false;

                }
            }
        }
    }
    return;
}