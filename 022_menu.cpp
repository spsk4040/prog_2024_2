//
//  022_menu.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(){
    int choice;
    
    printf("새 게임: 1\n");
    printf("불러오기: 2\n");
    printf("설정: 3\n");
    printf("크레딧: 4\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("새 게임\n");
    }else if (choice == 2){
        printf("불러오기\n");
    }else if (choice == 3){
        printf("설정\n");
    }else{
        printf("크레딧\n");
    }
}
