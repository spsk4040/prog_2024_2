//
//  059_Fopen.cpp
//  C_ Project
//
//  Created by 이범수 on 11/6/24.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* in;
    FILE* out;
    
    in = fopen("input.txt", "r"); // 파일 열기 r:읽
    if (in == NULL){ // 파일이 없다면
        printf("input1.txt가 업습니다.\n");
        exit(1);
    }
    
    out = fopen("output.txt", "w"); // w : 쓰기
    
    int n;
    
    fscanf(in, "%d", &n); // 파일 내용을 n에 입력받기
    fprintf(out, "%d %d", n, n*n); // 파일에 출력하기
    printf("%d\n", n);
    
    fclose(in); // 파일 닫기
    fclose(out);
}
