#include <stdio.h>

void keisan(int n1, int n2, int *tasu, int *hiku);

int main(void)
{
    int num1 = 10;
    int num2 = 30;
    int tashizan = 0;
    int hikizan = 0;
    keisan(num1, num2, &tashizan, &hikizan);
    printf("%d\n", tashizan);
    printf("%d\n", hikizan);
}
void keisan(int n1, int n2, int *tasu, int *hiku)
{
    *tasu = n1 + n2;
    *hiku = n1 - n2;
}