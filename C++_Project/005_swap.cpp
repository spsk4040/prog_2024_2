//
//  swap.cpp
//  c++_project
//
//  Created by 이범수 on 11/12/24.
//

#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
    
}

void swap(int& x, int& y) //레퍼런스 변수 사용
{
    int tmp = x;
    x = y;
    y = tmp;
    
}

void swap(double& x, double& y) //레퍼런스 변수 사용
{
    int tmp = x;
    x = y;
    y = tmp;
    
}

int main()
{
    int a = 4;
    int b = 5;
    
//    swap(&a, &b);
    swap(a, b);
    
    cout << a << ' ' << b << ' ' << endl;
}
