//
//  013_Vector2.cpp
//  c++_project
//
//  Created by 이범수 on 11/19/24.
//

#include <iostream>
using namespace std;

class Vector2 {
private:
    float x, y;
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    static Vector2 Sum(Vector2 a, Vector2 b);
    Vector2 Add(Vector2 other);
};
// 함수 정의
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const {return x;}
float Vector2::GetY() const {return y;}

// 정적 매서드의 정의에서는 staric 키워드를 붙일 필요 없음.
Vector2 Vector2::Sum(Vector2 a, Vector2 b){
    return Vector2(a.x + b.x, a.y + b.y);
}
// 일반 매서드 정의
Vector2 Vector2::Add(Vector2 other){
    return Vector2(x + other.x, y + other.y);
}
// 전역 함수 정의
//Vector2 Sum(Vector2 a, Vector2 b);

Vector2 Sum(Vector2 a, Vector2 b){
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

int main()
{
    Vector2 a(2, 3);
    Vector2 b(5,6);
    Vector2 c1 = Sum(a, b);              // 정역 함수 이용
    Vector2 c2 = Vector2::Sum(a, b);     // 정적 매서드 이용
    Vector2 c3 = a.Add(b);               // 클래스의 맴버 함수
    
    cout << "a = (" << a.GetX() << ", " << a.GetY() << ")" << endl;
    cout << "b = (" << b.GetX() << ", " << b.GetY() << ")" << endl;
    
    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
    cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
    
}


