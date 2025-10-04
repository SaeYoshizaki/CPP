#include <string>
#include <iostream>

using namespace std;

void ntom(const string str, const int n, const int m, string &res) // str: 入力, n: 入力の進法, m:出力の進法, res: 結果
{
    unsigned long sum = 0;
    for (char c : str)
    {
        sum = sum * n + (c - '0');
    }
    res = "";
    do
    {
        int num = sum % m;
        res = static_cast<char>(num + '0') + res;
        sum /= m;
    } while (sum);
    cout << sum << endl;
}
