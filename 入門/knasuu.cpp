#include <iostream>
using namespace std;

void hello(); // プロトタイプ宣言（こんな感じの関数があるよというのを宣言している。mainよりも下にhelloを定義しても大丈夫。こっちの方がぱっと見で見やすいので🙆）
void nibai(int x);

int main() {
    hello();
    int num = 10;
    nibai(num);
    return 0;
}

void nibai(int x){
    cout << x*2 << "\n";
}
void hello()
{
    cout << "Hello World!\n";
    // voidの場合は、戻り値はない。
    // 戻り値とは、関数が計算して出す戻り値のことね。
}