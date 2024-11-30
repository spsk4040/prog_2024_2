//
//  014_opOverloading.cpp
//  c++_project
//
//  Created by 이범수 on 11/20/24.
//

#include <iostream>
using namespace std;

class Vector2 {
private:
    int x,y;
    
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    Vector2 operator+(const Vector2 other) const;
    Vector2 operator-(const Vector2 other) const;
    Vector2 Add(const Vector2 other) const;
    Vector2 operator*(const float k) const;         // 백터 * 실수
    float operator*(const Vector2 other) const;     // 백터 * 백터
};

Vector2 Vector2::operator*(const float k) const {
    return Vector2(k * x, k * y);
}
float Vector2::operator*(const Vector2 other) const{
    return x * other.x, y * other.y;
}

Vector2::Vector2() :x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const {return x;}
float Vector2::GetY() const {return y;}
Vector2 Vector2::operator+(const Vector2 other) const {
    return Vector2(x + other.x, y + other.y);
}
Vector2 Vector2::operator-(const Vector2 other) const {
    return Vector2(x - other.x, y - other.y);
}
Vector2 Vector2::Add(const Vector2 other) const {
    return Vector2(x +other.x, y + other.y);
}
// 클래스 밖에서 만든 연산자 오버로딩
// 클래스의 맴버 함수가 아니다
Vector2 operator*(float k, Vector2 v) {
    return Vector2(k * v.GetX(), k * v.GetY());
}
int main()
{
    Vector2 a(3, 4);
    Vector2 b(5, 6);
    
    Vector2 c = a + b;
    Vector2 d = a - b;
    
    Vector2 e = a.Add(b);
    
    cout << "c = (" << c.GetX() << ", " << c.GetY() << ")" << endl;
    cout << "d = (" << d.GetX() << ", " << d.GetY() << ")" << endl;
    cout << "e = (" << e.GetX() << ", " << e.GetY() << ")" << endl;
    
    Vector2 f = a * 3.1;
    Vector2 g = 3.1 * a;
    float x = a * b;
    
    cout << "f = (" << f.GetX() << ", " << f.GetY() << ")" << endl;
    cout << "x = " << x << endl;
    
    cout << "g = (" << g.GetX() << ", " << g.GetY() << ")" << endl;
}
