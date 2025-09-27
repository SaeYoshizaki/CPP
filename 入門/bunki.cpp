#include <iostream>
using namespace std;

int main()
{
    // if文　
    // 0:偽 0以外:正
    if(10)
        cout << "0ではないので真です！\n";
    // 条件式を利用したif文
    int num;
    cout << "文章を入力してください\n";
    cin >> num;
    if (num == 10)
        cout << "numは10です！\n";
    if (num != 10)
        cout << "10ではありません！\n";

    // 感駅演算子
    if (num < 100)
        cout << "100より小さいです！\n";
    if (num >= 100)
        cout << "100以上ですね\n";
    
    
    // 論理演算子 &&: どちらも真　||: どちらかが真
    if (5 < num && 10 > num)
        cout << "numは5以上10未満です\n";


    // ブロック文　文章の範囲がわかりやすくなる。
    if (num == 10){
        cout << "10と同じです！\n";
        cout << "正解です！";
    }


    // if else文
    //C++の場合は、else ifが存在する。


    // switch case
    switch (num){ // 基準となる変数を戻り値のところに入れる。
        case 1:
            cout << "ちー\n";
            break;
        case 2:
            cout << "ろん\n";
            break;
        default:
            cout << "ノーてん\n";
            break;

    }
        return 0;
}
