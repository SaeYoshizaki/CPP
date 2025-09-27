#include <iostream>
using namespace std;

void hello(); // プロトタイプ宣言（こんな感じの関数があるよというのを宣言している。mainよりも下にhelloを定義しても大丈夫。こっちの方がぱっと見で見やすいので🙆）
void nibai(int x);
void sum(int x, int y);

int main() {
    hello();
    int num = 10;
    nibai(num);
    int apple, orange;
    cout << "appleの個数は？\n";
    cin >> apple;
    cout << "orangeの個数は？\n";
    cin >> orange;
    sum(apple, orange);
    return 0;
}

void nibai(int x){
    cout << x*2 << "\n";
}

void sum (int x, int y){
    cout << x*300 + y*400 << "\n";
}
void hello()
{
    cout << "Hello World!\n";
    // voidの場合は、戻り値はない。
    // 戻り値とは、関数が計算して出す戻り値のことね。
}