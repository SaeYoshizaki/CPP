#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int apple = 10;
    int *p;
    p = &apple;
    cout << *p << "\n";
    cout << p << "\n";
    
    return 0;
}

// ポインタ＝住所
// ショートカットのようなもの
// 別の関数から値を操作するため
// 大量の配列があった時に、それを全て使用するのではなく、配列の一番最初のアドレスだけわかれば使用できる。