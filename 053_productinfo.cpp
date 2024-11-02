//
//  052_product.cpp
//  C_ Project
//
//  Created by 이범수 on 10/30/24.
//

#include <stdio.h>
#include <string.h>

struct ProductInfo {
    int num;
    char name[20];
    int cost;
};

void swap(ProductInfo a, ProductInfo b);
void swap2(ProductInfo *a, ProductInfo *b);

int main(){
    ProductInfo x;
    
    x.num = 1001;
    strcpy(x.name, "제주 한라봉");
    x.cost = 20000;
    
    ProductInfo y = {1002, "성주 꿀참외", 15000};
    
    
    printf("%d : %s %d\n", y.num, y.name, y.cost);
    
    ProductInfo z;
    
    z = x;
    printf("%d : %s %d\n", z.num, z.name, z.cost);
    
    printf("%d\n", sizeof(x));
    printf("%d\n", &x);
    printf("%d\n", &x.num);
    printf("%d\n", &x.name);
    printf("%d\n", &x.cost);
    
    ProductInfo a = {1003, "대전 성심당빵", 3500};
    ProductInfo* p;
    
    // 구조체 포인터로 맴버를 사용하기
    p = &a;
    printf("%d : %s %d\n", a.num, a.name, a.cost);
    printf("%d : %s %d\n", (*p).num, (*p).name, (*p).cost);
    printf("%d : %s %d\n", p->num, p->name, p->cost); //(*p). = p->
    
    // x와 a번 바꾸기
    swap(x, a);
    printf("%d : %s %d\n", a.num, a.name, a.cost);
    printf("%d : %s %d\n", x.num, x.name, x.cost);
    
    // x와 a번 주소 바꾸기
    swap2(*a, *x);
    printf("%d : %s %d\n", a.num, a.name, a.cost);
    printf("%d : %s %d\n", x.num, x.name, x.cost);
}

void swap(ProductInfo a, ProductInfo b)
{
    ProductInfo tmp = a;
    a = b;
    b = tmp;
}

void swap2(ProductInfo *a, ProductInfo *b)
{
    ProductInfo tmp = *a;
    *a = *b;
    *b = tmp;
}

