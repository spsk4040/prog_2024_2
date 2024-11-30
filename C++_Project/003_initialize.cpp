//
//  initialize.cpp
//  c++_project
//
//  Created by 이범수 on 11/12/24.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b(20); // int b = 20;이랑 같은 의미
    int& x = a; // x는 a의 래퍼헌스이다(x는 a의 다른 이름이다)
    
    x = 100;
    
    cout << a << ' ' << b << ' ' << endl;
    
}
