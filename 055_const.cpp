//
//  055_const.cpp
//  C_ Project
//
//  Created by 이범수 on 11/5/24.
//

#include <stdio.h>

//const double pi = 3.141592; //상수
#define pi 3.141592 //매크로

double getArea(double r){
    return pi * r * r;
}

int main()
{
    printf("%f\n", getArea(10));
}



