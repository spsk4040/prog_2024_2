//
//  defaultParameter.cpp
//  c++_project
//
//  Created by 이범수 on 11/12/24.
//

#include <iostream>
using namespace std;

void f(int a = 1) // 값이 들어오면 초기화, 들어오지 않으면 기본값이 1로 초기화
{
    cout << a << endl;
}


int main()
{
    f(123);
    f();
}
