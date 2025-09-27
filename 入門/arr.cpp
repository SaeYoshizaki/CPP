#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "幾つの要素を持つArrayを作成しますか？？";
    cin >> num;
    int Array[num];
    int i;
    for (i = 0; i < num; i++)
    {
        cout << i << "番目の要素を入力してください！";
        cin >> Array[i];
    }
    for (i = 0; i < num; i++)
    {
        cout << Array[i] << " ";
    }
    return 0;
}