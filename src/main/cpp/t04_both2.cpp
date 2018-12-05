//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>

using namespace std;

int t04_both2() {
    int s1, s2;
    set<int> nums1, nums2, res;
    int pairs = 0;
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
        int inp;
        cin >> inp;
        nums1.insert(inp);
    }

    cin>>s2;
    for (int i = 0; i < s2; i++)
    {
        int inp;
        cin >> inp;
        nums2.insert(inp);
    }


    for(auto element: nums1){
        if( nums2.find(element) != nums2.end())
        {
            res.insert(element);
        }
    }

    for(auto element: res){
        cout<<element<<" ";
    }
    return 0;

}
