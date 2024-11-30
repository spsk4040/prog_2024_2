//
//  012_colorId.cpp
//  c++_project
//
//  Created by 이범수 on 11/19/24.
//

#include <iostream>
using namespace std;

class Color{
    
private:
    float r, g, b;
    int id;
    static int idCounter;
    
public:
//    Color() : r(0), g(0), b(0), id(idCounter++) {}  //시험 문제!!!!!!!!!!
    Color() {
        r = 0;
        g = 0;
        b = 0;
        id = idCounter++;
    }
//    Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}
    Color(float, float g, float b){
        this-> r = r;
        this-> g = g;
        this-> b = b;
        id = idCounter++;
    }
    
    float GetR() {return r;}
    float GetG() {return g;}
    float GetB() {return b;}
    int Getid() {return id;}
    
    static Color MixColors(Color a, Color b){
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
    }
};

int Color::idCounter = 1;

int main()
{
    Color rad = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    Color puple = Color::MixColors(rad, blue);
    
    cout << puple.GetR() << ", " << puple.GetG() << ", " << puple.GetB() << endl;
    cout << "red : id = " << rad.Getid() <<endl;
    cout << "red : id = " << blue.Getid() <<endl;
    cout << "red : id = " << puple.Getid() <<endl;
}
