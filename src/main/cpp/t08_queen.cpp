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

// function queen
int N, pole[10][10], schetchik=0;
void Queen(int x, int y){
bool queen=true;
for (int i=0; i<N; i++){
    for(int j=0; j<N; j++)
       if(pole[i][j]==1)
         if(i==x||j==y||abs(x-i)==abs(y-j))
           queen=false;}
if(queen){
  if(y==N-1)
    schetchik++;
  else{
      pole[x][y]=1;
         for(int k=0;k<N;k++)
            Queen(k,y+1);}}
pole[x][y]=0;
}
int t08_queen(){
cin>>N;
for(int i=0;i<N;i++)
    Queen(i,0);
cout<<schetchik;
return 0;
}
