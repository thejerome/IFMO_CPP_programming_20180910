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
bool queen_may_be_placed (int* queen_position, int column_number, int board_size) {
    for (int i = 0; i < column_number; i++) {
        if (queen_position[i] == board_size || abs(board_size - queen_position[i]) == abs(column_number - i)) {
            return false;
        }
    }
    return true;
}
int count_arrangements(int* queen_position, int column_number, int board_size){
    if (board_size == column_number) {
        return 1;
    }
    
    int sum = 0;
    
    for (int i=0; i< board_size; i++) {
       if(queen_may_be_placed(queen_position, column_number, i)){
           
           queen_position[column_number] = i;
        
           sum+=count_arrangements(queen_position, column_number+1, board_size);
        }
    }
    return sum;
}
    
int t08_queen(){
    int N;
    cin>>N;

    int queen_position[N];
        for (int i = 0; i < N; i++) {
        queen_position[i] = 0;
    }
    cout << count_arrangements(queen_position, 0, N);
    return 0;
}
