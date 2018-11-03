//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
    int board[8][8];
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            board[x][y] = 0;
        }
    }
    int x, y;
    for (int i = 0; i < 8; i++) {
        cin >> x >> y;
        board[x - 1][y - 1] = 1;

    }

    bool ans = true;
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++) {
            if (board[x][y] == 1){
                int chek = 0;
                for (int nx = 0; nx < 8; nx++){
                    if (nx != x && board[nx][y] == 1){
                        chek++;
                    }
                }
                for (int ny = 0; ny < 8; ny++){
                    if (ny != y && board[x][ny] == 1){
                        chek++;
                    }
                }
                for (int i = 0; i < 8 - abs(x - y); i++){
                    int ny = y - min(x,y) + i, nx = x - min(x,y) + i;
                    if ( (ny != y || nx != x) && board[nx][ny] == 1){
                        chek++;
                    }
                }
                for (int i = 0; i < 8 - abs(7 - (x + y)); i++){
                    int ny, nx;
                    if (x + y < 7){
                        ny = 7 - abs(7 - (x + y)) - i;
                        nx = i;
                    }else{
                        ny = abs(7 - (x + y)) + i;
                        nx = 7 - i;
                    }
                    if ( (ny != y || nx != x) && board[nx][ny] == 1){
                        chek++;
                    }
                }
                if (chek != 0){
                    ans = false;
                }
            }
        }
    }
    if (ans){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}