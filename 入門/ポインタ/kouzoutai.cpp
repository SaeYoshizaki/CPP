#include <stdio.h>

struct Fruits{
    char name[128];
    int price;
    int zaiko;
};

int main(void)
{
    struct Fruits store = {"apple", 150, 50};
    struct Fruits *p;
    p = &store;
    printf("名前：%s\n", (*p).name);
    printf("価格：%d\n", (*p).price);
    printf("在庫：%d\n", (*p).zaiko);
}
