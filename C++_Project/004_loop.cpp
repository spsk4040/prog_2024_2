//
//  loop.cpp
//  c++_project
//
//  Created by 이범수 on 11/12/24.
//

#include <iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    // 범위 가반 for문
    for (int i : a) {
        cout << i << ' ';
    }
    cout << endl;
    
}
