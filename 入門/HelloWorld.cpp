#include <iostream>
using namespace std; // これで毎回coutとかの名前空間を書く必要がなくなる

int main(){
    std::cout << "Hello World" << std::endl;
    cout << "Hello world" << endl; // 未処理のタスクを吐き出している。フラッシュというらしい。基本は\nで十分
    std::cout << "Hello world\n"; // 通料の開業方法
    return 0;
}