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
    bool r1[8]={false},r2[8]={false},r3[8]={false},r4[8]={false},r5[8]={false},r6[8]={false},r7[8]={false},r8[8]={false};
    for (int i=0; i<8; i++) {
        int x,y;
        cin >> x >> y;
        if (x == 1) r1[y-1]=true;
        if (x == 2) r2[y-1]=true;
        if (x == 3) r3[y-1]=true;
        if (x == 4) r4[y-1]=true;
        if (x == 5) r5[y-1]=true;
        if (x == 6) r6[y-1]=true;
        if (x == 7) r7[y-1]=true;
        if (x == 8) r8[y-1]=true;
    }
    for (int y=0; y<8; y++) {
        if (r1[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r1[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r1[Y]) {cout << "YES"; return 0;}
            if (r2[y] || (y-1>=0 && r2[y-1]) || (y+1<8 && r2[y+1])) {cout << "YES"; return 0;}
            if (r3[y] || (y-2>=0 && r3[y-2]) || (y+2<8 && r3[y+2])) {cout << "YES"; return 0;}
            if (r4[y] || (y-3>=0 && r4[y-3]) || (y+3<8 && r4[y+3])) {cout << "YES"; return 0;}
            if (r5[y] || (y-4>=0 && r5[y-4]) || (y+4<8 && r5[y+4])) {cout << "YES"; return 0;}
            if (r6[y] || (y-5>=0 && r6[y-5]) || (y+5<8 && r6[y+5])) {cout << "YES"; return 0;}
            if (r7[y] || (y-6>=0 && r7[y-6]) || (y+6<8 && r7[y+6])) {cout << "YES"; return 0;}
            if (r8[y] || (y-7>=0 && r8[y-7]) || (y+7<8 && r8[y+7])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r2[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r2[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r2[Y]) {cout << "YES"; return 0;}
            if (r3[y] || (y-1>=0 && r3[y-1]) || (y+1<8 && r3[y+1])) {cout << "YES"; return 0;}
            if (r4[y] || (y-2>=0 && r4[y-2]) || (y+2<8 && r4[y+2])) {cout << "YES"; return 0;}
            if (r5[y] || (y-3>=0 && r5[y-3]) || (y+3<8 && r5[y+3])) {cout << "YES"; return 0;}
            if (r6[y] || (y-4>=0 && r6[y-4]) || (y+4<8 && r6[y+4])) {cout << "YES"; return 0;}
            if (r7[y] || (y-5>=0 && r7[y-5]) || (y+5<8 && r7[y+5])) {cout << "YES"; return 0;}
            if (r8[y] || (y-6>=0 && r8[y-6]) || (y+6<8 && r8[y+6])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r3[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r3[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r3[Y]) {cout << "YES"; return 0;}
            if (r4[y] || (y-1>=0 && r4[y-1]) || (y+1<8 && r4[y+1])) {cout << "YES"; return 0;}
            if (r5[y] || (y-2>=0 && r5[y-2]) || (y+2<8 && r5[y+2])) {cout << "YES"; return 0;}
            if (r6[y] || (y-3>=0 && r6[y-3]) || (y+3<8 && r6[y+3])) {cout << "YES"; return 0;}
            if (r7[y] || (y-4>=0 && r7[y-4]) || (y+4<8 && r7[y+4])) {cout << "YES"; return 0;}
            if (r8[y] || (y-5>=0 && r8[y-5]) || (y+5<8 && r8[y+5])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r4[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r4[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r4[Y]) {cout << "YES"; return 0;}
            if (r5[y] || (y-1>=0 && r5[y-1]) || (y+1<8 && r5[y+1])) {cout << "YES"; return 0;}
            if (r6[y] || (y-2>=0 && r6[y-2]) || (y+2<8 && r6[y+2])) {cout << "YES"; return 0;}
            if (r7[y] || (y-3>=0 && r7[y-3]) || (y+3<8 && r7[y+3])) {cout << "YES"; return 0;}
            if (r8[y] || (y-4>=0 && r8[y-4]) || (y+4<8 && r8[y+4])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r5[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r5[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r5[Y]) {cout << "YES"; return 0;}
            if (r6[y] || (y-1>=0 && r6[y-1]) || (y+1<8 && r6[y+1])) {cout << "YES"; return 0;}
            if (r7[y] || (y-2>=0 && r7[y-2]) || (y+2<8 && r7[y+2])) {cout << "YES"; return 0;}
            if (r8[y] || (y-3>=0 && r8[y-3]) || (y+3<8 && r8[y+3])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r6[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r6[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r6[Y]) {cout << "YES"; return 0;}
            if (r7[y] || (y-1>=0 && r7[y-1]) || (y+1<8 && r7[y+1])) {cout << "YES"; return 0;}
            if (r8[y] || (y-2>=0 && r8[y-2]) || (y+2<8 && r8[y+2])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r7[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r7[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r7[Y]) {cout << "YES"; return 0;}
            if (r8[y] || (y-1>=0 && r8[y-1]) || (y+1<8 && r8[y+1])) {cout << "YES"; return 0;}
        }
    }
    for (int y=0; y<8; y++) {
        if (r8[y]) {
            for (int Y=y-1; Y>=0; Y--)
                if (r8[Y]) {cout << "YES"; return 0;}
            for (int Y=y+1; Y<8; Y++)
                if (r8[Y]) {cout << "YES"; return 0;}
        }
    }
    cout << "NO";
    return 0;
}
