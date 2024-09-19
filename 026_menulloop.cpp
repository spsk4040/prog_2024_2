//
//  025_menulloop.cpp
//  c_w
//
//  Created by 이범수 on 9/11/24.
//

#include <stdio.h>
int main(){
    int choice;
    
    do { //메뉴 반복
        
        printf("새 게임: 1\n");
        printf("불러오기: 2\n");
        printf("설정: 3\n");
        printf("크레딧: 4\n");
        printf("종료: 5\n");
        scanf("%d", &choice);
        
        
        switch (choice) { //int, char, 열거형 만 가능
            case 1: //변수는 X
                printf("새 게임\n");
                break;
            case 2:
                printf("불러오기\n");
                break;
            case 3:
                printf("설정\n");
                break;
            case 4:
                printf("크레딧\n");
                break;
            case 5:
                printf("종료\n");
                break;
            default:
                printf("잘못 입력하셨습니다.\n");
                break;
        }
    } while (choice != 5); // 5입력시 종료
}

