//
//  018_inheritance.cpp
//  c++_project
//
//  Created by 이범수 on 11/27/24.
//

#include <iostream>
using namespace std;

class Base{
public:
    int bNim;
    void bFunc(){
        cout << "Hello from Base!" << endl;
    }
};

class Derived : public Base{
public:
    int dNum;
    void dFunc(){
        cout << "Hello from Derived!" << endl;
    }
};

int main(){
    Base b;
    Derived d;
    
    b.bFunc();
    b.bNim = 1;
    cout << "b.bNum = " << b.bNim << endl;
    
    d.bFunc();
    d.bNim = 2;
    cout << "d.bNum = " << d.bNim << endl;
    
    d.dFunc();
    d.dNum = 1;
    cout << "b.bNum = " << b.bNim << endl;
}
