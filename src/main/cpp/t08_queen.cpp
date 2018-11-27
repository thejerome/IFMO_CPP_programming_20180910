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
int count_arrangements(
    int* queen_position,
    int column_number,
                       int board_size,){

    if (board_size == column_number) {
        return 1;
    } int sum = 0;
    for (int i=0; i<n;i++) {
        if(queen_may_be_placed(queen_position,column_number,i)) {
            queen_position[column_number] = i;
    }
        
        sum+=count_arrangements(queen_position, column_number+1, board_size);
}
    return sum;
}

bool queen_may_be_placed(a,b,c){
int t08_queen(){
    int N;
    cin>>N;
    
    cout<<count;
    return 0;
}
