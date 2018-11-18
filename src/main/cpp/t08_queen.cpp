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

bool if_i_can_put_here(int *positions, int size){
    bool if_was_break = false;
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j ++){
            if((abs(i - j) == abs(positions[i] - positions[j])) or (positions[i] == positions[j])){
                if_was_break = true;
                break;
            }
        }
        if (if_was_break){
            if_was_break = false;
            return if_was_break;
        }
    }
    return true;

}


bool system(int x, int number, int *new_field){
    int position = x -1;
    while(number >= x){
        new_field[position] = number % x;
        position -= 1;
        number /= x;
    }
    new_field[position] = number;
    return (if_i_can_put_here(new_field, x));
    }


int power(int x, int y){
    int k = 1;
    int rez = x;
    while (k != y){
        rez *= x;
        k += 1;
    }
    return rez;
}

int t08_queen(){
    int c = 0;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++){
        a[i] = 0;
    }
    for(int j = 0; j < power(n, n); j ++){
        if (system(n, j, a)){
            c += 1;
        }
    }
    cout << c;
    return 0;
}
