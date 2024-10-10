//
//  036_string.cpp
//  c_w
//
//  Created by 이범수 on 9/25/24.
//

#include <stdio.h>
int main(){
    //c언어에서 문자열을 문자배열에 저장한다.
    //c언어에서 string 타입이 없다.
    char s[] = "Hello, World!"; //크기가 최소 14
    
    printf("%s\n", s);
    
    char t[6] = {'h', 'e', 'l', 'l', 'o', 0};
    printf("%s\n", t);
    
    char name[20];
    
    printf("이름 입략: ");
    scanf("%s", name);
    
    printf("%s\n", name);
    
}

