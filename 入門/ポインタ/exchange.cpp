#include <stdio.h>

void keisan(int *x);

int main(void)
{
    int apple = 10;
    printf("一回目：%d\n", apple);
    keisan(&apple);
    printf("書き換えたよ！\n");
    printf("二回目：%d", apple);
}

void keisan(int *x)
{
    *x = 25;
}