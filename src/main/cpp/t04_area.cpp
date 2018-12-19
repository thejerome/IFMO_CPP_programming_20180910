//Проверьте, принадлежит ли точка данной закрашенной области:
//
// https://www.dropbox.com/s/3h3nl34g4ciiglt/3795.png?dl=1
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области 
// и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInArea 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//Формат входных данных
//        Вводятся два действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//-4
//-4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//-4
//-3
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

//function IsPointInArea


    bool IsPointInArea(double x, double y){
       return (((y >= (-x)) && (y >= (2*x+2)) && (sqrt(x+1)+sqrt(y-1) <= 4.0)) || ((y <= (-x)) && (y <= (2*x+2)) && (sqrt(x+1)+sqrt(y-1) >= 4.0)));
}
    }
int t04_area() {
    int x,y;
    cin >> x >> y;
    if (IsPointInArea(x,y)) 
        cout <<"YES";
 
    else
        cout << "NO";
    
    return 0;
}
