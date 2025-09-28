#include <iostream>
using namespace std;

int main()
{
    int N;
    int pm = 0;
    int num = 0;
    int result = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            pm = 1;
        }
        else
        {
            pm = -1;
        }
        num = i * i * i;
        result += num * pm;
    }
    cout << result << endl;
    return 0;
}