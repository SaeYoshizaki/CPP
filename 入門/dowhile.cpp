#include <iostream>
using namespace std;

int main() {
    int num = 10;
    do {
        cout << "message\n";
    }
    while(num < 5); // 満たしている場合は追加でdoが実行される。
    return 0;
}

// 一度は必ず処理が実行されるプログラム