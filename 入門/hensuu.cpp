#include <iostream>
using namespace std;

int main()
{
    int r = 3;
    cout << r * r * 3.14 << "\n";
    int value;
    value = 100;
    cout << value << "\n";
    double pi = 3.14;
    cout << (int)pi << "\n"; // 整数型として出力することができる。キャストというらしい。

    // インクリメント＆ディクリメント 1ずつ増やす or 減らす
    int x = 0;
    x++;
    // y++;
    cout << x << "\n";
    return 0;
}
