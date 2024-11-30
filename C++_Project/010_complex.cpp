//
//  010_complex.cpp
//  c++_project
//
//  Created by 이범수 on 11/13/24.
//

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;    // 실수
    double imag;    // 허수
    
public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(double real, double imag){
        this -> real = real;
        this -> imag = imag;
    }
    
    void SetReal(double real){
        this -> real = real;
    }
    void SetImag(double imag){
        this -> imag = imag;
    }
    double GetReal(){
        return this -> real;
    }
    double GetImag(){
        return this -> imag;
    }
};

int main()
{
    Complex c1;
    Complex c2 = Complex(2, 3);
    Complex c3(2, 4);
    
    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
}
