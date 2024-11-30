//
//  009_this.cpp
//  c++_project
//
//  Created by 이범수 on 11/13/24.
//

#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis(){
        cout << "나의 주소는 : " << this << endl;
    }
};

int main(){
    MyClass a, b;
    
    cout << "a의 주소 : " << &a << endl;
    cout << "b의 주소 : " << &b << endl;
    
    a.PrintThis();
    b.PrintThis();
}
